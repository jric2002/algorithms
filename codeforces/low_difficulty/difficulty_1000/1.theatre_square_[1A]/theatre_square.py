# Author: José Rodolfo (jric2002)
import math
n, m, a = map(int, input().split(" "))
r = math.ceil(n / a) * math.ceil(m / a)
print(r)