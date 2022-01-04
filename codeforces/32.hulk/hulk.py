# Author: José Rodolfo (jric2002)
n = int(input())
hate = "I hate"
love = "I love"
feeling = hate
if (n > 1):
  for i in range(2, (n + 1)):
    feeling += " that "
    if ((i % 2) != 0):
      feeling += hate
    else:
      feeling += love
feeling += " it"
print(feeling)