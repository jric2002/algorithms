# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n = int(input())
  min_mov = 0
  a = list(map(int, input().split(" ")))
  b = list(map(int, input().split(" ")))
  min_a = min(a)
  min_b = min(b)
  for i in range(0, n):
    min_mov += max((a[i] - min_a), (b[i] - min_b))
  print(min_mov)
  t -= 1