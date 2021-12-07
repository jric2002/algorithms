# Author: José Rodolfo (jric2002)
username = str(input())
number_of_characters = len(username)
repeated_characters = 0
for position in range(0, number_of_characters):
  character = username[position]
  for i in range(position + 1, number_of_characters):
    if (character == username[i]):
      repeated_characters += 1
      break
gender = "male" if (((number_of_characters - repeated_characters) % 2) != 0) else "female"
message = "CHAT WITH HER!" if (gender == "female") else "IGNORE HIM!"
print(message)