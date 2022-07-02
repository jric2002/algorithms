# Author: José Rodolfo (jric2002)
s = str(input())
number_lowercase_letters = 0
number_uppercase_letters = 0
for position in range(0, len(s)):
  if (s[position].islower()):
    number_lowercase_letters += 1
  else:
    number_uppercase_letters += 1
if (number_lowercase_letters >= number_uppercase_letters):
  s = s.lower()
else:
  s = s.upper()
print(s)