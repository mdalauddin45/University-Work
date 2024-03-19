t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    
    s = set()
    mp1 = {}
    mp2 = {}
    
    for i in range(n):
        s.add(arr[i])
        mp1[arr[i]] = mp1.get(arr[i],0) + 1
            
    v = []
    for i in range(n, 2 * n):
        if arr[i] in s:
            v.append(arr[i])
        if arr[i] in mp2:
            mp2[arr[i]] += 1
        else:
            mp2[arr[i]] = 1
            
    ans1 = []
    ans2 = []
    temp = k
    
    for key, value in mp1.items():
        if value == 2 and k != 0:
            ans1.extend([key, key])
            k -= 1
    k = temp
    
    for key, value in mp2.items():
        if value == 2 and k != 0:
            ans2.extend([key, key])
            k -= 1
    k = 2 * k
    
    for i in range(len(v)):
        if k != 0:
            ans1.append(v[i])
            ans2.append(v[i])
            k -= 1
    
    print(*ans1)
    print(*ans2)
