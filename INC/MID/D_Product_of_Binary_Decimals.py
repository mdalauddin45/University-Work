import math

def code():
    a = int(input().strip())
    s = str(a)

    if s.count('0') + s.count('1') == len(s):
        print("YES")
        return

    while a > 1:
        cnt = 0
        vec = []

        for i in range(1, int(math.sqrt(a)) + 1):
            if a % i == 0:
                vec.append(i)
                if i != a // i:
                    vec.append(a // i)

        vec.sort(reverse=True)
        vec.pop(0)

        for i in vec:
            s1 = str(i)
            if s1.count('0') + s1.count('1') == len(s1):
                a //= i
                cnt = 1
                break

        if cnt == 0:
            print("NO")
            return

    print("YES")

def main():
    t = int(input().strip())
    for _ in range(t):
        code()

if __name__ == "__main__":
    main()
