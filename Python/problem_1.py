n = input()
numbers = list(map(int, n.split()))
unique_numbers = list(set(numbers))
result = sorted(unique_numbers, reverse=True)[:3]
print(result)