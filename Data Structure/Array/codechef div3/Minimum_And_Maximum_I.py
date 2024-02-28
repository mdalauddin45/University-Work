def solve():
    n=int(input())
    p=n//2
    ans = p * (p+1)
    if n%2 ==1:
        ans+=(n//2)+1
    print(ans)

def main():
    t = int(input())
    for _ in range(t):
       solve()

if __name__ == "__main__":
    main()
