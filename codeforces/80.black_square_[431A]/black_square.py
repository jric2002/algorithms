# Author: José Rodolfo (jric2002)
a = list(map(int, input().split(" ")))
s = str(input())
size_s = len(s)
total_calories = 0
for i in range(0, size_s):
  if (s[i] == '1'):
    total_calories += a[0]
  elif (s[i] == '2'):
    total_calories += a[1]
  elif (s[i] == '3'):
    total_calories += a[2]
  else:
    total_calories += a[3]
print(total_calories)