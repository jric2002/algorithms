# Author: José Rodolfo (jric2002)
name_guest = str(input())
name_host = str(input())
letters = []
letters[:0] = str(input())
text = name_guest + name_host
for i in range(0, len(text)):
  exist = False
  for j in range(0, len(letters)):
    if (text[i] == letters[j]):
      letters.pop(j)
      exist = True
      break
  if (exist != True):
    break
if ((len(letters) == 0) and exist):
  print("YES")
else:
  print("NO")