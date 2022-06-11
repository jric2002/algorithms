# Author: José Rodolfo (jric2002)
import math
n = int(input())
min_num_bills = 0
dollars = [1, 5, 10, 20, 100]
num_bills = len(dollars)
while (n != 0):
  i = num_bills - 1
  while (i >= 0):
    if (n >= dollars[i]):
      min_num_bills += math.floor(n / dollars[i])
      n = (n % dollars[i])
    i -= 1
print(min_num_bills)