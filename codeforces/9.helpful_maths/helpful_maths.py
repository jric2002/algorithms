# Author: José Rodolfo (jric2002)
s = list(input())
num_elements = len(s)
for i in range(1, int((num_elements + 1) / 2)):
  for j in range(0, num_elements - i, 2):
    if (s[j] > s[j + 2]):
      temp_num = s[j]
      s[j] = s[j + 2]
      s[j + 2] = temp_num
print("".join(s))