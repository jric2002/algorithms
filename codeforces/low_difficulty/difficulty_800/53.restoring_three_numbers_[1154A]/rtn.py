# Author: José Rodolfo (jric2002)
values = list(map(int, input().split(" ")))
values.sort()
a = values[3] - values[2]
b = values[0] + values[2] - values[3]
c = values[1] + values[2] - values[3]
print(a, b, c, sep=" ")