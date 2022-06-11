# Author: José Rodolfo (jric2002)
n = int(input())
p = list(map(int, input().split(" ")))
sum = 0
juice_volume = 0
for position in range(0, n):
  sum += p[position]
juice_volume = (sum / n)
print("{0:.12f}".format(juice_volume))