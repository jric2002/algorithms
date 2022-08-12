# Author: José Rodolfo (jric2002)
n = int(input())
xr = yr = zr = 0
while (n):
  x, y, z = map(int, input().split(" "))
  xr += x
  yr += y
  zr += z
  n -= 1
if (xr == 0 and yr == 0 and zr == 0):
  print("YES")
else:
  print("NO")