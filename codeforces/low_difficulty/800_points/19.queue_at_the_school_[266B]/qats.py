# Author: José Rodolfo (jric2002)
input_data = input().split(" ")
n = int(input_data[0])
t = int(input_data[1])
s = list(input())
while (t):
  i = 0
  while (i < (n - 1)):
    if (s[i] == 'B' and s[i + 1] == 'G'):
      s[i] = 'G'
      s[i + 1] = 'B'
      i += 1
    i += 1
  t -= 1
print("".join(s))