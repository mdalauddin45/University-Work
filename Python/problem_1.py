import heapq
n = input()
numbers = list(map(int, n.split()))
unique_numbers = list(set(numbers))
# top_three = sorted(unique_numbers, reverse=True)[:3]
top_three = heapq.nlargest(3, unique_numbers)
print(top_three)