# Author: José Rodolfo (jric2002)
n1 = str(input())
n2 = str(input())
result = ""
number_size = len(n1)
for position in range(0, number_size):
  if (n1[position] != n2[position]):
    result += '1'
  else:
    result += '0'
print(result)