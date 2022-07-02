# Author: José Rodolfo (jric2002)
n = str(input())
quantity_numbers = 0
for position in range(0, len(n)):
  if (n[position] == '4' or n[position] == '7'):
    quantity_numbers += 1
if (quantity_numbers == 4 or quantity_numbers == 7):
  print("YES")
else:
  print("NO")