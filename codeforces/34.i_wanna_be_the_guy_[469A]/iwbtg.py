# Author: José Rodolfo (jric2002)
n = int(input())
p = 0
levels = []
input_data = list(map(int, input().split(" ")))
p += input_data[0]
levels.extend(input_data[1:])
input_data = list(map(int, input().split(" ")))
p += input_data[0]
levels.extend(input_data[1:])
status = True
counter = 0
i = 1
while ((i <= n) and status):
  status = False
  for j in range(0, p):
    if (levels[j] == i):
      status = True
      counter += 1
      break
  i += 1
if (n == counter):
  print("I become the guy.")
else:
  print("Oh, my keyboard!")