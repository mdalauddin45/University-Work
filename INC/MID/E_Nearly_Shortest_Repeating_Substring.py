def shortest_repeating_substring_length(n, s):
    for length in range(1, (n // 2) + 1):
        valid = True
        diff_count = 0
        for i in range(n):
            if s[i] != s[i % length]:
                diff_count += 1
                if diff_count > 1:
                    valid = False
                    break
        if valid:
            return length
    return n

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input().strip()
        result = shortest_repeating_substring_length(n, s)
        print(result)

if __name__ == "__main__":
    main()
