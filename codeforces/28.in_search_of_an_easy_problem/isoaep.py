# Author: José Rodolfo (jric2002)
n = int(input())
is_easy = True
opinions = input().split(" ")
for position in range(0, n):
  if (opinions[position] == '1'):
    is_easy = False
print("EASY") if (is_easy) else print("HARD")