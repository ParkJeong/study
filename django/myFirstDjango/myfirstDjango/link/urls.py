from django.urls import path
from .views import first, second, third

app_name="link"
urlpatterns = [
        path('first', first, name="first"),
        path('second', second, name="second"),
        path('third', third, name="third"),
]
