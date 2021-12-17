# Author: José Rodolfo (jric2002)
n = int(input())
available_rooms = 0
while (n):
  p, q = list(map(int, input().split(" ")))
  if ((q - p) >= 2):
    available_rooms += 1
  n -= 1
print(available_rooms)