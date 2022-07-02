# Author: José Rodolfo (jric2002)
n = int(input())
for i in range(0, n):
  t = int(input())
  numbers = list(map(int, input().split(" ")))
  numbers.sort()
  status = True
  for j in range(0, (t - 1)):
    if (abs(numbers[j] - numbers[j + 1]) > 1):
      status = False
      break
  if (status):
    print("YES")
  else:
    print("NO")