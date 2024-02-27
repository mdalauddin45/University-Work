import math

def solve():
    a, b, l = map(int, input().split())
    loop_a = int(math.log(l) / math.log(a))
    loop_b = int(math.log(l) / math.log(b))
    s = set()
    for i in range(loop_a + 2):
        for j in range(loop_b + 2):
            a_new = a ** i
            b_new = b ** j
            prod = a_new * b_new
            if l >= prod and l % prod == 0:
                s.add(prod)
    print(len(s))

def main():
    t = int(input())
    for _ in range(t):
        solve()

if _name_ == "_main_":
    main()