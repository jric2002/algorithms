# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n = int(input())
  tasks = str(input())
  temp = ""
  t_before = "."
  s = False
  for i in range(0, n):
    if (t_before != tasks[i]):
      for j in range(0, len(temp)):
        if (tasks[i] == temp[j]):
          s = True
          break
      if (not(s)):
        temp += tasks[i]
        t_before = tasks[i]
      else:
        break
  if (s):
    print("NO")
  else:
    print("YES")
  t -= 1