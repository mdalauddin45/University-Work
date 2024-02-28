def solve():
    n = int(input())
    
    if n % 2 == 0:
        ans = (n * (n + 1) / 2) + n - 1
    else:
        ans = (n * (n + 1) / 2)
        ans+=(n//2)+1

    print(ans)

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
