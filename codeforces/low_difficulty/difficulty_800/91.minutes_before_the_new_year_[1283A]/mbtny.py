# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  h, m = map(int, input().split(" "))
  r = ((23 - h) * 60) + (60 - m)
  print(r)
  t -= 1