# Author: José Rodolfo (jric2002)
n = int(input())
lucky_numbers = [4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777]
size_ln = len(lucky_numbers)
s = False
i = 0
while (i < size_ln and lucky_numbers[i] <= n):
  if ((n % lucky_numbers[i]) == 0):
    s = True
    break
  i += 1
print("YES") if (s) else print("NO")