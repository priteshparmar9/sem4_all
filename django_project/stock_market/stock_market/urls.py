"""stock_market URL Configuration

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/4.0/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""
from ast import increment_lineno
from tarfile import REGULAR_TYPES
from xml.etree.ElementInclude import include
from django.contrib import admin
from django.urls import path
from django.urls import URLPattern
from django.urls.conf import include


urlpatterns = [
    path('admin/', admin.site.urls),
    path('',include('registration.urls')),
    path('temp1/',include('temp1.urls')),
    path('stock_data/',include('stock_data.urls'))
]
