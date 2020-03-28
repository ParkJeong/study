from django.shortcuts import render

def first(request):
    return render(request, 'link/first.html')


def second(request):
    return render(request, 'link/second.html')


def third(request):
    return render(request, 'link/third.html')
# Create your views here.
