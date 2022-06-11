# Author: José Rodolfo (jric2002)
import math
a, b = list(map(int, input().split(" ")))
max_num_days_different_socks = min(a, b)
max_num_days_same_socks = math.floor(abs(a - b)/2)
print(max_num_days_different_socks, max_num_days_same_socks)