# Alauddin
def main():
    t = int(input())
    for _ in range(t):
        s = int(input())
        ans = 0
        while (1 << ans) <= s:
            ans += 1
        ans -= 1
        print(1 << ans)

if __name__ == "__main__":
    main()
