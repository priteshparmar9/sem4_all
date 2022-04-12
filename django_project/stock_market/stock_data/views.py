from symtable import Symbol
from django.shortcuts import redirect, render
from .models import Stock, Stock_database
from .models import Watchlist, news
import requests
import matplotlib.pyplot as plt
import numpy as np


def show_data(request):
    symbol = {'AAPL','MSFT','GOOG'}
    stocks = []
    for s in symbol:        
        # plt.show()
        # plt.show()
        t = Stock()
        t.symbol = s
        t.price = get_price(s)
        save_graph(request,s)
        t.img = 'graph_'+s+'.png'
        stocks.append(t)
    return redirect("../../",{'s': stocks})
    
def save_graph(request,s):
    url = 'https://www.alphavantage.co/query?function=TIME_SERIES_DAILY&symbol='+s+'&apikey=50VHB72TFYCGNCKI'
    r = requests.get(url)
    data = r.json()
    print(data)
    data = data["Time Series (Daily)"]
    dates = []
    prices = []
    j = i = 0
    price = 0.0
    for date in data:
        if i % 4 == 0:
            dates.insert(j,date)
            prices.insert(j,data[date]['1. open'])
            j = j + 1
        i = i + 1        
    for date in data:
        price = data[date]['4. close']
        break
    dates.reverse()
    prices.reverse()
    xpoints = np.array(dates)
    ypoints = np.array(prices)
    ypoints = list(map(float, ypoints))
    plt.style.use('Solarize_Light2')
    fig = plt.gcf()
    fig.set_size_inches(18.5, 10.5)
    ax= plt.subplot()
    plt.setp(ax.get_xticklabels(), rotation=30, ha='right')
    plt.plot(xpoints, ypoints)
    plt.savefig('static/images/graph_'+s+'.png')
    print("saved")
    # plt.show()
        # print("hello")
    return price
    
def show_stock(request):
    stock = {}
    stock["dataset"] = Stock_database.objects.filter(symbol = request.GET['symbol']).all()
    return render(request,'view_single_stock.html',{'stock' : stock["dataset"][0]})

def get_price(s):
    url = 'https://www.alphavantage.co/query?function=TIME_SERIES_DAILY&symbol='+s+'&apikey=50VHB72TFYCGNCKI'
    r = requests.get(url)
    data = r.json()
    print(data)
    price = 0.0
    data = data["Time Series (Daily)"]
    i = 1
    for date in data:
        price = data[date]['1. open']
        i = i + 1
        if i == 2:
            break
    return price
      
def view_stock(request):
    symbol = {} 
    symbol["dataset"]= Stock_database.objects.all()
    return render(request,"view_stock.html",{'stocks': symbol["dataset"]})

def show_watchlist(request):
    watchlists1 = {}        
    watchlists1["dataset"] = Watchlist.objects.all()
    return render(request,"show_watchlist.html", {'watchlist' : watchlists1["dataset"]})

def add_to_watchlist(request):
    s = request.POST['s']
    q = request.POST['q']
    p = {}
    p = Stock_database.objects.filter(symbol=s).all()
    price = p[0].price
    watch_list = Watchlist.objects.create(username=request.user.username,symbol = s, quantity = q, price = price)
    return redirect('../../../stock_data/watchlist')

def temp(request):
    sym = request.GET['symbol']
    url = 'static/images/graph_'+sym+'.png'

    p = save_graph(request,sym)
    stock = Stock_database.objects.update_or_create(symbol=sym,img=url,price=p)
    return redirect('../../../')

def delete(request):
    w = request.GET['id']
    Watchlist.objects.filter(id=w).delete()
    return redirect('../../../')

def refresh(request):
    symbol = {} 
    symbol["dataset"]= Stock_database.objects.all()
    for stock in symbol["dataset"]:
        stock.price = get_price(stock.symbol)
        Stock_database.objects.filter(symbol=stock.symbol).update(price=stock.price)
    return render(request,"view_stock.html",{'stocks': symbol["dataset"]})

def delete_stock(request):
    symbol = request.GET["symbol"]
    Stock_database.objects.filter(symbol=symbol).delete()
    return redirect('../../../')

def show_news(request):
    url = "https://newsapi.org/v2/top-headlines?country=us&country=in&category=business&apiKey=549f52787fc940f692c75e50d670d2bb"
    r = requests.get(url)
    data = r.json()
    data = data['articles']
    news1 = []
    i = 0
    for data1 in data:
        n = news()
        n.source = data1['source']['name'] 
        n.title = data1['title']
        n.description = data1['description']
        news1.insert(i,n)
        i = i + 1
    return render(request, "show_news.html",{'news': news1})