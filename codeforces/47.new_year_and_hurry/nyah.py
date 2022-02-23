# Author: José Rodolfo (jric2002)
import math
n, k = [int(number) for number in input().split(" ")]
available_minutes = 240
available_minutes = available_minutes - k
problems_can_solve = math.floor((-1 + math.sqrt((5 + (8 * available_minutes)) / 5)) / 2)
if (problems_can_solve < 0):
  problems_can_solve = math.floor((-1 - math.sqrt((5 + (8 * available_minutes)) / 5)) / 2)
if (problems_can_solve > n):
  problems_can_solve = n
print(problems_can_solve)