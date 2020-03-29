from django.shortcuts import render, redirect
from .models import Post
from .forms import PostForm
import pdb

def main(request):
    return render(request, 'posts/main.html')


def new(request):
    """
    form = PostForm()
    context = {
            'form': form
    }
    """
    context = {
            'form': PostForm()
    }
    
    return render(request, 'posts/new.html', context)


def create(request):
    if request.method == "POST":
        form = PostForm(request.POST)
        if form.is_valid():
            form.save()
        """
        title = request.POST.get('title')
        content = request.POST.get('content')
       # Post(title=title, content=content).save()
        Post.objects.create(title=title, content=content)
        """
        return redirect(main)

# Create your views here.
