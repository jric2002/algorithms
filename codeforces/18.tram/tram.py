# Author: José Rodolfo (jric2002)
n = int(input())
min_capacity = 0
passengers = 0
while(n):
  input_data = input().split(" ")
  a = int(input_data[0])
  b = int(input_data[1])
  passengers = (passengers - a) + b
  if (passengers > min_capacity):
    min_capacity = passengers
  n -= 1
print(min_capacity)