def find_min_string(s1, s2):
    n = len(s1)
    min_str = "z" * n
    current = s1[0]
    
    for i in range(1, n):
        if s1[i] > s2[i - 1]:
            candidate = current + s2[i - 1:]
            if candidate < min_str:
                min_str = candidate
        current += s1[i]
    
    min_str = min(min_str, current + s2[n - 1])
    return min_str

def count_min_strings(s1, s2, min_str):
    n = len(s1)
    current = s1[0]
    count = 1
    
    for i in range(1, n):
        if s1[i] >= s2[i - 1]:
            candidate = current + s2[i - 1:]
            if candidate == min_str:
                count += 1
        current += s1[i]
    
    if current + s2[n - 1] == min_str:
        count += 1
    return count

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        string1 = input()
        string2 = input()
        
        min_str = find_min_string(string1, string2)
        num_min_str = count_min_strings(string1, string2, min_str)
        
        print(min_str)
        print(num_min_str - 1)

if __name__ == "__main__":
    main()
