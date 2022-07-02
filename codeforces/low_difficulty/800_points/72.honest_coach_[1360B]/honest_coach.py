# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n = int(input())
  s = [int(x) for x in input().split(" ")]
  r = []
  s.sort()
  for i in range(1, n):
    r.append(s[i] - s[i - 1])
  print(min(r))
  t -= 1