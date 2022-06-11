# Author: José Rodolfo (jric2002)
k = int(input())
l = int(input())
m = int(input())
n = int(input())
d = int(input())
damaged_dragons = d
for i in range(1, (d + 1)):
  if ((i % k) and (i % l) and (i % m) and (i % n)):
    damaged_dragons -= 1
print(damaged_dragons)