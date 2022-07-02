# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n = int(input())
  max_value = 0
  if ((n % 2) == 0):
    max_value = int(n / 2)
  else:
    max_value = int((n - 1) / 2)
  print(max_value)
  t -= 1