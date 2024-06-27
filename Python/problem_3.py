def cnt_vowels(s):
    vowel = "aeiouAEIOU"
    cnt = 0
    for char in s:
        if char in vowel:
            cnt +=1
    return cnt
s = input()
result = cnt_vowels(s)
print(result)
