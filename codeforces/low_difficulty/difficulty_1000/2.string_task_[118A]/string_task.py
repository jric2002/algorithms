# Author: José Rodolfo (jric2002)
s = str(input())
vowels = ['a', 'o', 'y', 'e', 'u', 'i']
o = ""
for ch in s:
  is_vowel = False
  ch = ch.lower()
  for v in vowels:
    if (v == ch):
      is_vowel = True
      break
  if (not(is_vowel)):
    o += '.' + ch
print(o)