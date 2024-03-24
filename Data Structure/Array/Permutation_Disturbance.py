import math

# Function to calculate minimum number of operations required for a permutation
def min_operations(n, permutation):
    count = 0
    for i in range(n):
        if permutation[i] != i + 1:  # Check if the element is not in its right position
            count += 1
    return math.ceil(count / 2)  # Return half of the count rounded up

# Input
t = int(input())  # Number of test cases
for _ in range(t):
    n = int(input())  # Size of the permutation
    p = list(map(int, input().split()))  # Permutation
    
    # Output minimum number of operations
    print(min_operations(n, p))
