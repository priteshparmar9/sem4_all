# Generated by Django 4.0.1 on 2022-04-03 12:48

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
        ('stock_data', '0003_delete_watchlist'),
    ]

    operations = [
        migrations.CreateModel(
            name='Watchlist',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('email', models.EmailField(max_length=254)),
                ('symbol', models.CharField(max_length=20)),
                ('quantity', models.PositiveIntegerField()),
                ('price', models.DecimalField(decimal_places=5, max_digits=10)),
            ],
        ),
    ]