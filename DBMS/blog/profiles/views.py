from django.shortcuts import render,redirect
from .import forms
from django.contrib import messages

# Create your views here.
def add_profile(request):
    if request.method == 'POST':
        profile_form = forms.ProfileForm(request.POST)
        if profile_form.is_valid():
            print(profile_form.cleaned_data)
            profile_form.save()
            messages.success(request,'Profile added successfully!')
            return redirect('add_profile')
    else:
        profile_form = forms.ProfileForm()
    return render(request, 'profile.html',{'form':profile_form})