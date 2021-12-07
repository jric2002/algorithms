# Author: José Rodolfo (jric2002)
weights = input().split(" ")
limak_weight = int(weights[0])
bob_weight = int(weights[1])
years = 0
while (limak_weight <= bob_weight):
  limak_weight = limak_weight * 3
  bob_weight = bob_weight * 2
  years += 1
print(years)