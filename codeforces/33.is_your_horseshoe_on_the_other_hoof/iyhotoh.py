# Author: José Rodolfo (jric2002)
s = list(map(int, input().split(" ")))
number_horseshoes = len(s)
min_horseshoes = 0
status = [True for i in range(0, number_horseshoes)]
for i in range(0, number_horseshoes):
  if (status[i]):
    for j in range((i + 1), number_horseshoes):
      if (s[i] == s[j]):
        status[j] = False
        min_horseshoes += 1
print(min_horseshoes)