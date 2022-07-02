# Author: José Rodolfo (jric2002)
string_one = (str(input())).lower()
string_two = str(input()).lower()
if (string_one < string_two):
  print(-1)
elif (string_one > string_two):
  print(1)
else:
  print(0)