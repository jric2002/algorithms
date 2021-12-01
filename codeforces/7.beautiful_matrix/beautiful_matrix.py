# Author: José Rodolfo (jric2002)
matrix = []
min_num_mov = 0
for r in range(0, 5):
  row = input().split(" ")
  row = [int(e) for e in row]
  matrix.append(row)
  for c in range(0, 5):
    if (matrix[r][c] == 1):
      min_num_mov = abs(3 - (r + 1)) + abs(3 - (c + 1))
print(min_num_mov)