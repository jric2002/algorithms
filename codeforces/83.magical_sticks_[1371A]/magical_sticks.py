# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n = int(input())
  max_num_sticks = 0
  if ((n % 2) == 0):
    max_num_sticks = int(n / 2)
  else:
    max_num_sticks = int((n + 1) / 2)
  print(max_num_sticks)
  t -=1