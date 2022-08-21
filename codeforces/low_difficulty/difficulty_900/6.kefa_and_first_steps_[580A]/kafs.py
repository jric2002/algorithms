# Author: José Rodolfo (jric2002)
n = int(input())
a = list(map(int, input().split(" ")))
max_sg = size_sg = 1
size_a = len(a)
for i in range(1, size_a):
  if (a[i - 1] <= a[i]):
    size_sg += 1
  else:
    if (size_sg > max_sg):
      max_sg = size_sg
    size_sg = 1
if (size_sg > max_sg):
  max_sg = size_sg
print(max_sg)