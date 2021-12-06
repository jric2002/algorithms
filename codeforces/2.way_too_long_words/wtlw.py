# Author: José Rodolfo (jric2002)
n = int(input())
if (n >= 1 and n <= 100):
  for i in range(0, n):
    word = str(input())
    num_char = len(word)
    if (num_char > 10):
      print(word[0], (num_char - 2), word[-1], sep='')
    else:
      print(word)