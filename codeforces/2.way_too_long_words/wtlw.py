n = int(input())
if (n >= 1 and n <= 100):
  words = []
  for i in range(0, n):
    words.append(str(input()))
  for i in range(0, n):
    num_char = len(words[i])
    if (num_char > 10):
      print(words[i][0], (num_char - 2), words[i][-1], sep='')
    else:
      print(words[i])