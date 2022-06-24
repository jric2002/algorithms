# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n, m = map(int, input().split(" "))
  if (n == 1):
    max_sum = 0
  elif (n == 2):
    max_sum = m
  else:
    max_sum = m * 2
  print(max_sum)
  t -= 1