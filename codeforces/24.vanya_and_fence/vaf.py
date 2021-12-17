# Author: José Rodolfo (jric2002)
n, h = list(map(int, input().split(" ")))
min_width = 0
a = [int(height) for height in input().split(" ")]
for i in range(0, n):
  if (a[i] >= 1 and a[i] <= (2 * h)):
    if (a[i] <= h):
      min_width += 1
    else:
      min_width += 2
print(min_width)