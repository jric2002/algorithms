# Author: José Rodolfo (jric2002)
n = int(input())
m_score = 0
c_score = 0
while (n):
  m, c = [int(x) for x in input().split(" ")]
  if (m > c):
    m_score += 1
  elif (m < c):
    c_score += 1
  else:
    m_score += 1
    c_score += 1
  n -= 1
if (m_score > c_score):
  print("Mishka")
elif (m_score < c_score):
  print("Chris")
else:
  print("Friendship is magic!^^")