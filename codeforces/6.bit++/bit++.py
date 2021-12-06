# Author: José Rodolfo (jric2002)
n = int(input())
if (n >= 1 and n <= 150):
  x = 0
  for i in range(0, n):
    statement = str(input())
    if (statement[1] == '+'):
      x += 1
    elif (statement[1] == '-'):
      x -= 1
    else:
      continue
  print(x)