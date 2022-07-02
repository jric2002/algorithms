# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  a, b, c, n = map(int, input().split(" "))
  m = max(a, b, c)
  r = n - ((m - a) + (m - b) + (m - c))
  print("YES") if (((r % 3) == 0 and (r >= 0))) else print("NO")
  t -= 1