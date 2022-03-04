# Author: José Rodolfo (jric2002)
t = int(input())
k = 10 # k = [1;10]
for i in range(0, t):
  a, b = [int(number) for number in input().split(" ")]
  a = abs(a - b)
  min_mov = 0
  while (a != 0):
    if (a <= 10):
      a = 0
      min_mov += 1
    else:
      min_mov = int(a / k)
      a = a % k
  print(min_mov)