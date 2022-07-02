# Author: José Rodolfo (jric2002)
input_data = input().split(" ")
n = int(input_data[0])
k = int(input_data[1])
while (k):
  if ((n % 10) == 0):
    n = int(n / 10)
  else:
    n -= 1
  k -= 1
print(n)