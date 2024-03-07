def min_op(s):
    pos = {}
    for i, char in enumerate(s):
        if char not in pos:
            pos[char] = [i]
        else:
            pos[char].append(i)
            
    min_opp = float('inf')
    for char, indices in pos.items():
        num = len(indices)
        operations = sum(indices[j] - indices[j - 1] - 1 for j in range(1, num))
        min_opp = min(min_opp, operations)
    return min_opp

T = int(input())
for _ in range(T):
    s = input()
    result = min_op(s)
    print(result)
