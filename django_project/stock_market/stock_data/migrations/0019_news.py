# Generated by Django 4.0.1 on 2022-04-08 05:47

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('stock_data', '0018_stock_database'),
    ]

    operations = [
        migrations.CreateModel(
            name='news',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
            ],
        ),
    ]
