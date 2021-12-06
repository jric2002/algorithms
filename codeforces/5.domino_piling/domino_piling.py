# Author: José Rodolfo (jric2002)
import math
input_data = input().split(" ")
input_data = [int(e) for e in input_data]
m, n = input_data
if (m >= 1 and m <= n and n <= 16):
  num_max_dominoes = math.floor((m * n) / 2)
  print(num_max_dominoes)