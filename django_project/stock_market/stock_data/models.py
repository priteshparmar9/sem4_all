from statistics import mode
from django.db import models

# Create your models here.
class Stock(models.Model):
    symbol: models.CharField(max_length=20)
    img: models.CharField(max_length=50)
    price: models.DecimalField(decimal_places=5,max_digits=10)

class Stock_for_index:
    symbol: str
    price: float

class Stock_database(models.Model):
    symbol = models.CharField(max_length=20)
    img = models.CharField(max_length=50)
    price = models.DecimalField(decimal_places=5,max_digits=10)

class Watchlist(models.Model):
    username = models.CharField(max_length=20)
    symbol = models.CharField(max_length=20)
    quantity = models.PositiveIntegerField()
    price = models.DecimalField(decimal_places=5,max_digits=10)

class news(models.Model):
    source = str
    title = str
    description = str