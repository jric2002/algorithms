# Author: José Rodolfo (jric2002)
s, n = map(int, input().split(" "))
d = []
status = True
while (n):
  d.append([int (x) for x in input().split(" ")])
  n -= 1
d.sort(key=lambda x : x[0])
for p in d:
  if (s <= p[0]):
    status = False
    break
  else:
    s += p[1]
print("YES") if (status) else print("NO")