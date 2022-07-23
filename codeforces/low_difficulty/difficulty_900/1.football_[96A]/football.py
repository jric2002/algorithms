# Author: José Rodolfo (jric2002)
p = str(input())
size_p = len(p)
dangerous = False
if (size_p >= 7):
  for i in range(0, (size_p - 7 + 1)):
    sub_p = p[i:(i + 7)]
    if (sub_p == "0000000" or sub_p == "1111111"):
      dangerous = True
      break
print("YES") if (dangerous) else print("NO")