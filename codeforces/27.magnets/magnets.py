# Author: José Rodolfo (jric2002)
n = int(input())
number_groups = 1
last_pole = ''
while(n):
  magnet = str(input())
  if (last_pole == magnet[0]):
    number_groups += 1
  last_pole = magnet[1]
  n -= 1
print(number_groups)