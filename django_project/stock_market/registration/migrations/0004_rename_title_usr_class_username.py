# Generated by Django 4.0.1 on 2022-03-15 08:50

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('registration', '0003_rename_name_usr_class_title'),
    ]

    operations = [
        migrations.RenameField(
            model_name='usr_class',
            old_name='title',
            new_name='username',
        ),
    ]
