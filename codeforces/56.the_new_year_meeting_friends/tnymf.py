# Author: José Rodolfo (jric2002)
coordinates = list(map(int, input().split(" ")))
coordinates.sort()
min_dis = (coordinates[1] - coordinates[0]) + (coordinates[2] - coordinates[1])
print(min_dis)