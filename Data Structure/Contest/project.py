with open("00-trailer.txt", "r") as file:
    lines = file.readlines()

W, H, GN, SM, TL = map(int, lines[0].split())

golden_points = []
silver_points = []
tiles = {}

line_index = 1

for _ in range(GN):
    GX, GY = map(int, lines[line_index].split())
    golden_points.append((GX, GY))
    line_index += 1

for _ in range(SM):
    SX, SY, SC = map(int, lines[line_index].split())
    silver_points.append((SX, SY, SC))
    line_index += 1

for _ in range(TL):
    TID, TC, TN = lines[line_index].split()
    TC = int(TC)
    TN = int(TN)
    tiles[TID] = (TC, TN)
    line_index += 1

grid = [['.' for _ in range(W)] for _ in range(H)]

for GX, GY in golden_points:
    grid[GY][GX] = 'G'

for SX, SY, SC in silver_points:
    grid[SY][SX] = ('S', SC)

def get_neighbors(x, y, tile_id):
    neighbors = []
    directions, cost, _ = tiles[tile_id]
    for direction in directions:
        if direction == 'left':
            if x > 0:
                neighbors.append((x - 1, y, cost))
        elif direction == 'right':
            if x < W - 1:
                neighbors.append((x + 1, y, cost))
        elif direction == 'up':
            if y > 0:
                neighbors.append((x, y - 1, cost))
        elif direction == 'down':
            if y < H - 1:
                neighbors.append((x, y + 1, cost))
    return neighbors

def find_route(start, end):
    queue = [(start, 0, 0)]
    visited = set()
    while queue:
        current, score, cost = queue.pop(0)
        x, y = current
        if current == end:
            return score, cost
        visited.add(current)
        for neighbor, neighbor_cost in get_neighbors(x, y, grid[y][x]):
            nx, ny, n_cost = neighbor
            new_score = score + calculate_score(neighbor, cost, n_cost)
            new_cost = cost + neighbor_cost
            queue.append((neighbor, new_score, new_cost))
    return -1, -1

def calculate_score(position, total_cost, tile_cost):
    x, y, _ = position
    cell = grid[y][x]
    if cell[0] == 'S':
        score = cell[1]
        if grid[y][x] == 'V':
            return 2 * score - 2 * tile_cost
        else:
            return score - tile_cost
    grid[y][x] = 'V'
    return 0

total_score = 0
total_cost = 0
for i in range(GN):
    for j in range(i + 1, GN):
        start_point = golden_points[i]
        end_point = golden_points[j]
        score, cost = find_route(start_point, end_point)
        total_score += score
        total_cost += cost

final_score = total_score - total_cost
print("Final Score:", final_score)
