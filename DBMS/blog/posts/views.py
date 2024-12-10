from django.shortcuts import render,redirect
from .import forms
from .import models
from django.contrib import messages

# Create your views here.

def add_post(request):
    if request.method == 'POST':
        post_form = forms.PostForm(request.POST)
        if post_form.is_valid():
            print(post_form.cleaned_data)
            post_form.save()
            messages.success(request,'Post added successfully!')
            return redirect('add_post')
    else:
        post_form = forms.PostForm()
        messages.error(request,'post cannot be added')
    return render(request, 'post.html',{'form':post_form})

def edit_post(request,id):
    post = models.Post.objects.get(pk=id)
    post_form = forms.PostForm(instance=post)
    print(post.title)
    if request.method == 'POST':
        post_form = forms.PostForm(request.POST, instance=post)
        if post_form.is_valid():
            print(post_form.cleaned_data)
            post_form.save()
            messages.success(request,'Post Edit successfully!')
            return redirect('home')
    return render(request, 'post.html',{'form':post_form})
def delete_post(request,id):
    post = models.Post.objects.get(pk=id)
    post.delete()
    messages.success(request,'Post Delete successfully!')
    return redirect('home')