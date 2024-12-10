from django.shortcuts import render,redirect
from .import forms
from django.contrib import messages
# Create your views here.

def add_author(request):
    if request.method == 'POST':
        author_form = forms.AuthorForm(request.POST)
        if author_form.is_valid():
            print(author_form.cleaned_data)
            author_form.save()
            messages.success(request,'Author added successfully!')
            return redirect('add_author')
    else:
        author_form = forms.AuthorForm()
    return render(request, 'author.html',{'form':author_form})