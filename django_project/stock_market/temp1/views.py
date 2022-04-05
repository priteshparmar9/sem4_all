from django.shortcuts import render
from .models import GeeksModel
from .forms import GeeksForm
# Create your views here.

def list_view(request):
    context={}
    context["dataset"]=GeeksModel.objects.all()
    return render(request,"list_view.html",context)

def create_view(request):
    context={}
    form = GeeksForm(request.POST or None)
    if form.is_valid():
        form.save()
    
    context['form']=form
    return render(request,"create_view.html", context)