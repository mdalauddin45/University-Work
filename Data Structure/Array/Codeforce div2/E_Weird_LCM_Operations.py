import math

def solve(n):
    operations = []
    
    def add_operation(i, j, k):
        operations.append((i, j, k))
    
    array = [i for i in range(1, n+1)]
    
    def lcm(x, y):
        return x * y // math.gcd(x, y)
    
    for i in range(1, n-1):
        add_operation(i, i+1, i+2)
        array[i-1] = lcm(array[i], array[i+1])
        array[i] = lcm(array[i-1], array[i+1])
        array[i+1] = lcm(array[i-1], array[i])
    
    k = len(operations)
    print(k)
    for op in operations:
        print(*op)

# Read input
t = int(input())
for _ in range(t):
    n = int(input())
    solve(n)
