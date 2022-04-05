from django.http import HttpResponse
from django.shortcuts import redirect, render
from .models import usr_class
from django.contrib.auth.models import User, auth
from .forms import user_form
# Create your views here.

def index(request):
    return render(request,'index.html')

def register(request):
    if request.method == 'POST':
        username = request.POST["username"]
        email = request.POST["email"]
        password = request.POST["password"]
        re_password = request.POST["re_password"]
        dob = request.POST["dob"]

        if User.objects.filter(username = username).exists():
            print("Username Already taken!!!")
            return render(request,'registration_form.html')
        elif User.objects.filter(email=email).exists():
            print("Email is already registered!!!")
            return render(request,'registration_form.html')
        elif password == re_password:
            user = User.objects.create_user(username = username, email = email, password = password)
            user.save()
            print("User created")
        return redirect("/login")
        # else:
            # print("Password are not matching!!!")
    else:
        print("From get method")
        return render(request,'registration_form.html')

def list_view(request):
    context={}
    context["dataset"] = usr_class.objects.all()

    return render(request,"list_view.html")

def login(request):
    if(request.method == 'POST'):
        username= request.POST['username']
        password= request.POST['password']

        user = auth.authenticate(username = username, password = password)

        if user is not None:
            auth.login(request,user)
            print("Logged in")
            return redirect('/')
        else:
            return render(request,"login.html")
    else:
        return render(request,"login.html")

def logout(request):
    auth.logout(request);
    return redirect("/login")

def edit(request):
    if request.method == "POST":
        username = request.POST["username"]
        email = request.POST["email"]
        user = User.objects.update_or_create(username = username, email = email, password = request.user.password)
        user.save()
        return redirect("/")
    else:
        return render(request,"edit.html")
        