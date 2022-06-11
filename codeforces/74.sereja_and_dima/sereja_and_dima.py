# Author: José Rodolfo (jric2002)
n = int(input())
cards = list(map(int, input().split(" ")))
max_value = 0
sereja_score = 0
dima_score = 0
pl = 0
pr = n - 1
for i in range(0, n):
  if (cards[pl] > cards[pr]):
    max_value = cards[pl]
    pl += 1
  else:
    max_value = cards[pr]
    pr -= 1
  if ((i % 2) == 0):
    sereja_score += max_value
  else:
    dima_score += max_value
print(sereja_score, dima_score, sep=" ")