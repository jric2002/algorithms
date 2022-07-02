# Author: José Rodolfo (jric2002)
n = int(input())
total_seconds = 0
height_soldiers = list(map(int, input().split(" ")))
last_position = n - 1
greater_height = 0
lower_height = 0
pos_highest_height = 0
pos_lowest_height = 0
for i in range(0, n):
  if (i == 0):
    greater_height = height_soldiers[i]
    pos_highest_height = i
    lower_height = height_soldiers[i]
    pos_lowest_height = i
  else:
    if (greater_height < height_soldiers[i]):
      greater_height = height_soldiers[i]
      pos_highest_height = i
    if (lower_height >= height_soldiers[i]):
      lower_height = height_soldiers[i]
      pos_lowest_height = i
if (pos_lowest_height > pos_highest_height):
  total_seconds = pos_highest_height + (last_position - pos_lowest_height)
else:
  total_seconds = pos_highest_height + (last_position - pos_lowest_height) - 1
print(total_seconds)