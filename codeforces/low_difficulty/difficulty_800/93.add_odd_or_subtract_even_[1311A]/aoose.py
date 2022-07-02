# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  a, b = map(int, input().split(" "))
  if (a == b):
    print(0)
  elif (a > b):
    if (((a % 2) == 0 and (b % 2) == 0) or ((a % 2) != 0 and (b % 2) != 0)):
      print(1)
    else:
      print(2)
  else:
    if (((a % 2) == 0 and (b % 2) == 0) or ((a % 2) != 0 and (b % 2) != 0)):
      print(2)
    else:
      print(1)
  t -= 1