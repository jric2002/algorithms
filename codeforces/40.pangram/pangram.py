# Author: José Rodolfo (jric2002)
n = int(input())
text = str(input())
is_pangram = False
alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
for character in alphabet:
  is_pangram = False
  for position in range(0, n):
    if (character == text[position] or character.upper() == text[position]):
      is_pangram = True
      break
  if (is_pangram != True):
    break
if (is_pangram):
  print("YES")
else:
  print("NO")