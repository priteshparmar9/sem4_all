import re
from django.shortcuts import redirect, render
from .models import Stock, Stock_for_index
from .models import Watchlist
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
    url = 'https://www.alphavantage.co/query?function=TIME_SERIES_DAILY&symbol='+s+'&apikey=B03UT9F5UQOM6FST'
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
    plt.savefig('static/images/graph_'+s+'.png',dpi=50)
    print("saved")
    # plt.show()
        # print("hello")
    return price

def add_to_watchlist(request):
    s = request.POST['s']
    q = request.POST['q']
    p = get_price(s)
    watch_list = Watchlist.objects.create(username=request.user.username,symbol = s, quantity = q, price = p)
    return redirect('../../../stock_data/watchlist')
    
def show_stock(request):
    return render(request,'view_single_stock.html',{'stock' : request.GET['symbol']})

def get_price(s):
    url = 'https://www.alphavantage.co/query?function=TIME_SERIES_DAILY&symbol='+s+'&apikey=B03UT9F5UQOM6FST'
    r = requests.get(url)
    data = r.json()
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
    stocks = []
    symbol = {'AAPL','MSFT','GOOG'}
    for s in symbol:
        stock = Stock_for_index()
        stock.symbol = s
        stock.price = get_price(s)
        stocks.append(stock)
    return render(request,"view_stock.html",{'stocks': stocks})

def show_watchlist(request):
    watchlists1 = {}
    watchlists1["dataset"] = Watchlist.objects.all()
    return render(request,"show_watchlist.html", {'watchlist' : watchlists1["dataset"]})

def save_data_to_database(request):
    symbol = {'AAPL','MSFT','GOOG'}

    stocks = []
    for s in symbol:
        # t = Stock()
        t.img = 'static/images/graph_'+s+'.png'
        t.price = get_price(s)
        Stock.objects.update_or_create(symbol = t.symbol, img = t.img, price = t.price)
        # stocks.append(t)
    # symbol = {'AMZN','GOOGL','TSLA'}

    return redirect("../../",{'s': stocks})