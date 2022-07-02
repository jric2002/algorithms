# Author: José Rodolfo (jric2002)
n = int(input())
s = str(input())
games_won_anton = 0
games_won_danik = 0
for position in range(0, n):
  if (s[position] == 'A'):
    games_won_anton += 1
  else:
    games_won_danik += 1
if (games_won_anton > games_won_danik):
  print("Anton")
elif (games_won_anton < games_won_danik):
  print("Danik")
else:
  print("Friendship")