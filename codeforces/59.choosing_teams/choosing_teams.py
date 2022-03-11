# Author: José Rodolfo (jric2002)
import math
n, k = list(map(int, input().split(" ")))
max_num_teams = 0
counter = 0
y = [int(number) for number in input().split(" ")]
for i in range(0, n):
  if ((5 - y[i]) >= k):
    counter += 1
max_num_teams = math.floor(counter / 3)
print(max_num_teams)