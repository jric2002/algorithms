# Author: José Rodolfo (jric2002)
input_data = (input()).split(" ")
input_data = [int(e) for e in input_data]
n, k = input_data
if (k >= 1 and n >= k and n <= 50):
  reference_score = 1
  next_round = 0
  score = input().split(" ")
  score = list(map(int, score))
  for i in range(0, len(score)):
    if (score[i] >= reference_score):
      if ((i + 1) == k):
        reference_score = score[i]
      next_round += 1
  print(next_round)