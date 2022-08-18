# Author: José Rodolfo (jric2002)
w = str(input())
size_w = len(w)
s = True
nw = ""
nw = nw + (w[0].upper() if (w[0].islower()) else w[0].lower())
i = 1
while (i < size_w):
  if (not(w[i].isupper())):
    s = False
    break
  nw = nw + w[i].lower()
  i += 1
print(nw) if (s) else print(w)