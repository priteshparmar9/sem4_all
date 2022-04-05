from django import forms
from .models import usr_class

class user_form(forms.ModelForm):
    class Meta:
        model=usr_class
        fields=[
            "username",
            "email",
            "password",
            "dob",
        ]