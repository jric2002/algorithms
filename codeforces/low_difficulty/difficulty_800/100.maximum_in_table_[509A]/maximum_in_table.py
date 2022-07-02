# Author: José Rodolfo (jric2002)
n = int(input())
a = [[1 for c in range(n)] for r in range(n)]
for i in range(1, n):
  for j in range(1, n):
    a[i][j] = a[i - 1][j] + a[i][j - 1]
m = a[n - 1][n - 1]
print(m)