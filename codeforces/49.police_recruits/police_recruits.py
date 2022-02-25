# Author: José Rodolfo (jric2002)
n = int(input())
events = list(map(int, input().split(" ")))
num_police = num_crimes = 0
for i in range(0, n):
  event = events[i]
  if (event == -1):
    if (num_police > 0):
      num_police -= 1
    else:
      num_crimes += 1
  else:
    num_police += event
print(num_crimes)