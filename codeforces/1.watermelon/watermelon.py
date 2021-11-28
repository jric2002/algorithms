w = int(input())
if (w >= 1 and w <= 100):
  if ((w == 2) or ((w % 2) != 0)):
    print("NO")
  else:
    print("YES")