# Author: José Rodolfo (jric2002)
n = int(input())
stones_taken = 0
if (n != 1):
  row_of_stones = str(input())
  for position in range(0, (len(row_of_stones) - 1)):
    if (row_of_stones[position] == row_of_stones[position + 1]):
      stones_taken += 1
print(stones_taken)