import imp
from django.shortcuts import render
from travello.models import Destination

# Create your views here.
def index(request):
    dest1 = Destination()
    dest1.name = "Rajkot"
    dest1.dest = "The Capital of Saurashtra"
    return render(request,'index.html',{'dest1' : dest1})