# Generated by Django 5.1.5 on 2025-01-21 03:46

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ("learning_logs", "0002_entry"),
    ]

    operations = [
        migrations.RenameField(
            model_name="topic",
            old_name="date_time",
            new_name="date_added",
        ),
    ]
