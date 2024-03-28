def dfs(u, parent):
    subtree_size[u] = 1
    for v in adj[u]:
        if v != parent:
            dfs(v, u)
            subtree_size[u] += subtree_size[v]

n = int(input())
adj = [[] for _ in range(n + 1)]
subtree_size = [0] * (n + 1)

for _ in range(n - 1):
    u, v = map(int, input().split())
    adj[u].append(v)
    adj[v].append(u)

dfs(1, 0)

for u in range(1, n + 1):
    max_subtree_size = 0
    for v in adj[u]:
        if subtree_size[v] > max_subtree_size:
            max_subtree_size = subtree_size[v]
    remaining_ants = n - subtree_size[u]
    if max_subtree_size <= n // 2 and remaining_ants <= n // 2:
        print("YES")
        break
else:
    print("NO")
