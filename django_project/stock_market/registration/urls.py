from tarfile import REGULAR_TYPES
from django.contrib import admin
from django.urls import path
from django.urls import URLPattern
from . import views
urlpatterns = [
    path('',views.index),
    path('registration/',views.register),
    path('view/',views.list_view),
    path('login/',views.login),
    path('logout/',views.logout),
    path('edit/',views.edit),
    path('contactus/',views.contactus),
    path('admin1/',views.admin)
]