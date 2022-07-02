# Author: José Rodolfo (jric2002)
x = int(input())
min_num_steps = 0
if ((x % 5) == 0):
  min_num_steps = int(x / 5)
else:
  min_num_steps = int(x / 5) + 1
print(min_num_steps)