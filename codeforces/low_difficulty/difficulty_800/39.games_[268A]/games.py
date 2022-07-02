# Author: José Rodolfo (jric2002)
n = int(input())
color_uniforms = []
playing_as_guest = 0
for i in range(0, n):
  h, a = list(map(int, input().split(" ")))
  color_uniforms.append([h, a])
for i in range(0, n):
  for j in range(0, n):
    if (i != j):
      if (color_uniforms[i][0] == color_uniforms[j][1]):
        playing_as_guest += 1
print(playing_as_guest)