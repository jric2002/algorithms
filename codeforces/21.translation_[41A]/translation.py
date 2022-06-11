# Author: José Rodolfo (jric2002)
s = str(input())
t = str(input())
is_correct = True
size_s = len(s)
size_t = len(t)
i = 0
j = size_s - 1
if (size_s == size_t):
  while (i < size_s):
    if (s[i] != t[j]):
      is_correct = False
      break
    i += 1
    j -= 1
else:
  is_correct = False
print("YES") if (is_correct) else print("NO")