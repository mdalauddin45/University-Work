import math

def main():
    n, r = map(float, input().split())
    m = 0
    trees = []
    
    # Plant trees horizontally
    for i in range(1, int(n) + 1):
        x = i
        y = r
        while y <= n:
            trees.append((x, y))
            m += 1
            y += 2 * r
    
    # Plant trees vertically
    for j in range(1, int(n) + 1):
        y = j
        x = r
        while x <= n:
            if (x, y) not in trees:
                trees.append((x, y))
                m += 1
            x += 2 * r
    
    print(m)
    for tree in trees:
        print(tree[0], tree[1])

if __name__ == "__main__":
    main()
