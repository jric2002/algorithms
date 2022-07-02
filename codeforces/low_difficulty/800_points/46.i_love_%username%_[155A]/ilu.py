# Author: José Rodolfo (jric2002)
n = int(input())
scores = list(map(int, input().split(" ")))
max_score = min_score = scores[0]
num_amazing = 0
for i in range(1, n):
  score = scores[i]
  if (score > max_score):
    max_score = score
    num_amazing += 1
  if (score < min_score):
    min_score = score
    num_amazing += 1
print(num_amazing)