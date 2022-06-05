# Author: José Rodolfo (jric2002)
n, k, l, c, d, p, nl, np = list(map(int, input().split(" ")))
r = [((k * l) / nl), c * d, p / np]
number_toasts = int(min(r) / n)
print(number_toasts)