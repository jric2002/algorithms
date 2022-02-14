# Author: José Rodolfo (jric2002)
letters = str(input())
letters = letters[1:(len(letters) - 1)]
letters = letters.split(", ")
different_letters = []
if (letters[0] == ""):
  letters = []
for letter in letters:
  if letter not in different_letters:
    different_letters.append(letter)
print(len(different_letters))