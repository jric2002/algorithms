# Author: José Rodolfo (jric2002)
n, m = list(map(int, input().split(" ")))
snake = '#'
empty_cell = '.'
draw_snake_tail = 'e' # begin = e or end = e
def draw(object, length):
  i = 1
  while (i <= length):
    print(object, end='')
    i += 1
for r in range(1, n + 1):
  if ((r % 2) != 0):
    draw(snake, m)
  else:
    if (draw_snake_tail == 'e'):
      draw(empty_cell, (m - 1))
      print(snake, end='')
      draw_snake_tail = 'b'
    else:
      print(snake, end='')
      draw(empty_cell, (m - 1))
      draw_snake_tail = 'e'
  print(end="\n")