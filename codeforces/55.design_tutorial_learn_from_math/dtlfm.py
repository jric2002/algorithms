# Author: José Rodolfo (jric2002)
import math
n = int(input())
def isPrime(number):
  from_num = 2
  to_num = math.floor(number / 2) + 1
  for i in range(from_num, to_num):
    if ((number % i) == 0):
      return False
  return True
x = math.floor(n / 3)
y = 0
while (True):
  y = n - x
  if (isPrime(x) or isPrime(y)):
    x += 1
  else:
    break
print(x, y, sep=" ")