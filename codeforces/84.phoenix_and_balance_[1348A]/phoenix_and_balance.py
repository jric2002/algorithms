# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n = int(input())
  min_diff = pow(2, (int(n / 2) + 1)) - 2
  print(min_diff)
  t -= 1