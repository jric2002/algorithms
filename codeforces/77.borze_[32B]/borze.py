# Author: José Rodolfo (jric2002)
borze_code = str(input())
size_borze_code = len(borze_code)
i = 0
decoded_ternary_number = ""
while (i < size_borze_code):
  if (borze_code[i] == '.'):
    decoded_ternary_number += '0'
    i += 1
    continue
  if (borze_code[i] == '-' and borze_code[i + 1] == '.'):
    decoded_ternary_number += '1'
    i += 2
    continue
  if (borze_code[i] == '-' and borze_code[i + 1] == '-'):
    decoded_ternary_number += '2'
    i += 2
    continue
print(decoded_ternary_number)