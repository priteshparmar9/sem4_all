import re
from django.shortcuts import redirect, render
from .models import Stock, Stock_for_index
from .models import Watchlist
import requests
import matplotlib.pyplot as plt
import numpy as np

def show_data(request):
    symbol = {'AAPL','MSFT','GOOG','AMZN'}
    stocks = []
    for s in symbol:
        print(s)
    for s in symbol:        
        # plt.show()
        print("hello")
        # plt.show()
        t = Stock()
        t.symbol = s
        t.price = get_price(s)
        t.img = 'graph_'+s+'.png'
        stocks.append(t)
    return redirect("../../",{'s': stocks})
    
def save_graph(request,s):
    url = 'https://www.alphavantage.co/query?function=TIME_SERIES_DAILY&symbol='+s+'&apikey=B03UT9F5UQOM6FST'
    r = requests.get(url)
    data = r.json()
   # print(data["Time Series (Daily)"])
    data = data["Time Series (Daily)"]
        # print(data)
    dates = []
    prices = []
    j = i = 0
    price = 0.0
    for date in data:
        print(data[date])
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
    plt.savefig('static/images/graph_'+s+'.png',dpi=70)
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
    print(request.GET['symbol'])
    return render(request,'view_single_stock.html',{'stock' : request.GET['symbol']})

def get_price(s):
    url = 'https://www.alphavantage.co/query?function=TIME_SERIES_DAILY&symbol='+s+'&apikey=B03UT9F5UQOM6FST'
    r = requests.get(url)
    data = r.json()
    print(data)
    price = 0.0
    data = data["Time Series (Daily)"]
    for date in data:
        price = data[date]['1. open']
        break
    return price

def show_watchlist(request):
    watchlists1 = {}
    watchlists1["dataset"] = Watchlist.objects.all()
    print(watchlists1)
    return render(request,"show_watchlist.html", {'watchlist' : watchlists1["dataset"]})
      
def view_stock(request):
    stocks = []
    symbol = {'AAPL','MSFT','GOOG','AMZN'}
    for s in symbol:
        stock = Stock_for_index()
        stock.symbol = s
        stock.price = get_price(s)
        stocks.append(stock)
    return render(request,"view_stock.html",{'stocks': stocks})