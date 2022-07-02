# Author: José Rodolfo (jric2002)
n = int(input())
positions = list(map(int, input().split(" ")))
friends = [int(position) for position in positions]
for i in range(0, n):
  p = positions[i]
  friends[p - 1] = (i + 1)
for i in range(0, n):
  print(friends[i], end=" ")