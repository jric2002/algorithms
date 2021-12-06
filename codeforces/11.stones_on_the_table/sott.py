# Author: José Rodolfo (jric2002)
n = int(input())
stones_taken = 0
if (n != 1):
  previous_stone = str(input())
  for i in range(0, (n - 1)):
    current_stone = str(input())
    if (current_stone == previous_stone):
      stones_taken += 1
    previous_stone = current_stone
print(stones_taken)