def find_duplicates(numbers):
    seen = set()
    duplicates = set(x for x in numbers if x in seen or seen.add(x))
    return list(duplicates)

n = input()
numbers = list(map(int, n.split()))
result = find_duplicates(numbers)
print(result)
