n = int(input())
if (n >= 1 and n <= 1000):
  opinions = []
  probability = 0
  solutions = 0
  for r in range(0, n):
    opinion = input().split(" ")
    opinion = list(map(int, opinion))
    opinions.append(opinion)
  for r in range(0, n):
    probability = opinions[r][0] + opinions[r][1] + opinions[r][2]
    if (probability >= 2):
      solutions += 1
  print(solutions)