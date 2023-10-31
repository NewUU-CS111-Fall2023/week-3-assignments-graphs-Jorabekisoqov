def dfs(v, visited):
    visited[v] = True

    moves = 1
    for neighbor in adj[v]:
        if not visited[neighbor]:
            moves = max(moves, dfs(neighbor, visited) + 1)

    return moves

n, x = map(int, input().split())

adj = [[] for _ in range(n + 1)]
visited = [False for _ in range(n + 1)]

for i in range(n - 1):
    a, b = map(int, input().split())

    adj[a].append(b)
    adj[b].append(a)

moves = dfs(1, visited)

print(moves)
