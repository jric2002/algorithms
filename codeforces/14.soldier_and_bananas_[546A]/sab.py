# Author: José Rodolfo (jric2002)
input_data = input().split(" ")
k = int(input_data[0])
n = int(input_data[1])
w = int(input_data[2])
borrowed_money = int((k * ((w * (w + 1)) / 2)) - n)
borrowed_money = borrowed_money if (borrowed_money > 0) else 0
print(borrowed_money)