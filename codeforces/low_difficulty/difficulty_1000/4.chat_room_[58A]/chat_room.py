# Author: José Rodolfo (jric2002)
word = ['h', 'e', 'l', 'l', 'o']
s = str(input())
size_s = len(s)
size_w = len(word)
p = 0
for i in range(0, size_s):
  if (p < size_w):
    if (s[i] == word[p]):
      p += 1
print("YES") if (p == size_w) else print("NO")