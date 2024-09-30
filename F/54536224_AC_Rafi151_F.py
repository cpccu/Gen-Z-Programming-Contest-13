
matrix = []
for _ in range(5):
    row = list(map(int, input().strip().split()))
    matrix.append(row)


one_position = None

for i in range(5):
    for j in range(5):
        if matrix[i][j] == 1:
            one_position = (i + 1, j + 1)  # Store position as (row, col) in 1-based index


target_position = (3, 3)


moves = abs(one_position[0] - target_position[0]) + abs(one_position[1] - target_position[1])


print(moves)
