# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n = int(input())
  a = list(map(int, input().split(" ")))
  index = 0
  counter = 1
  number = a[0]
  for i in range(1, n):
    if ((number != a[i]) and (index < 1)):
      index = i + 1
    if (number == a[i]):
      counter += 1
  if (counter == 1):
    index = index - counter
  print(index)
  t -= 1