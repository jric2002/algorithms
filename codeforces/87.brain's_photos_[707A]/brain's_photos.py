# Author: José Rodolfo (jric2002)
n, m = [int(e) for e in input().split(" ")]
is_blackandwhite = True
pxs = []
while (n):
  pxs.extend(input().split(" "))
  n -= 1
for p in pxs:
  if (p != 'B' and p != 'W' and p != 'G'):
    is_blackandwhite = False
if (is_blackandwhite):
  print("#Black&White")
else:
  print("#Color")