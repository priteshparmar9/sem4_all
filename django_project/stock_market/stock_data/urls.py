from tarfile import REGULAR_TYPES
from django.contrib import admin
from django.urls import path
from django.urls import URLPattern
from . import views
urlpatterns = [
    path('show_data/',views.save_data_to_database),
    path('show_stock/',views.show_stock),
    path('watchlist/',views.show_watchlist),
    path('view_stock/',views.view_stock),
    path('addwatchlist/',views.add_to_watchlist),
]