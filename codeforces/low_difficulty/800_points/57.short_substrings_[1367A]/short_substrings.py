# Author: José Rodolfo (jric2002)
t = int(input())
for i in range(0, t):
  b = list(input())
  a = ""
  if (len(b) > 2):
    sub_b = b[1:len(b) - 1]
    j = 2
    while (j <= len(sub_b)):
      j = j - 1
      sub_b.pop(j)
      j += 2
    a = b[0] + "".join(sub_b) + b[len(b) - 1]
  else:
    a = "".join(b)
  print(a)