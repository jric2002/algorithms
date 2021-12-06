# Author: José Rodolfo (jric2002)
n = int(input())
if (n >= 1 and n <= 1000):
  petya = vasya = tonya = 0
  probability = 0
  solutions = 0
  for r in range(0, n):
    input_data = input().split(" ")
    input_data = list(map(int, input_data))
    petya = input_data[0]
    vasya = input_data[1]
    tonya = input_data[2]
    probability = petya + vasya + tonya
    if (probability >= 2):
      solutions += 1
  print(solutions)