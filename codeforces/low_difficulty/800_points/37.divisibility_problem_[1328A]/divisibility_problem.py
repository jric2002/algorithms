# Author: José Rodolfo (jric2002)
n = int(input())
min_movements = []
for i in range(0, n):
  a, b = [int(number) for number in input().split(" ")]
  movements = 0
  if ((a % b) != 0):
    movements = b - (a % b)
  min_movements.append(movements)
for i in range(0, n):
  print(min_movements[i])