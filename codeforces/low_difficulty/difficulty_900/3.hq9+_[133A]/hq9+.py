# Author: José Rodolfo (jric2002)
kw = ['H', 'Q', '9', '+']
p = str(input())
size_p = len(p)
size_kw = len(kw)
output = False
i = 0
while (i < size_p and not(output)):
  for j in range(0, (size_kw - 1)):
    if (p[i] == kw[j]):
      output = True
      break
  i += 1
print("YES") if (output) else print("NO")