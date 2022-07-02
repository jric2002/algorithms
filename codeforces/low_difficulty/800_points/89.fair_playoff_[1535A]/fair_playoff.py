# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  s1, s2, s3, s4 = map(int, input().split(" "))
  r = min(max(s1, s2), max(s3, s4))
  m1 = min(s1, s2)
  m2 = min(s3, s4)
  print("YES") if ((r > m1) and (m2 < r)) else print("NO")
  t -= 1