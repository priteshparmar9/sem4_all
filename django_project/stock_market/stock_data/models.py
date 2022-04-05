from django.db import models

# Create your models here.
class Stock:
    symbol: str
    img: str
    price: float

class Stock_for_index:
    symbol: str
    price: float

class Watchlist(models.Model):
    username = models.CharField(max_length=20)
    symbol = models.CharField(max_length=20)
    quantity = models.PositiveIntegerField()
    price = models.DecimalField(decimal_places=5,max_digits=10)
