from django.db import models

class usr_class(models.Model):
    # title = models.CharField(max_length=200)
    # description = models.TextField()
    username = models.CharField(max_length=40)
    email = models.EmailField()
    password = models.CharField(max_length=16)
    dob = models.DateField()

    def __str__(self):
        return self.username

