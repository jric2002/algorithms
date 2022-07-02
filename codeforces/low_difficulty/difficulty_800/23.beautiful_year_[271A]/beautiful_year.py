# Author: José Rodolfo (jric2002)
year = int(input())
is_different = False
while (is_different != True):
  year = year + 1
  numbers = str(year)
  repeated_digits = 0
  for position in range(0, len(numbers)):
    number = numbers[position]
    for i in range(position + 1, len(numbers)):
      if (number == numbers[i]):
        repeated_digits += 1
  if (repeated_digits == 0):
    is_different = True
print(year)