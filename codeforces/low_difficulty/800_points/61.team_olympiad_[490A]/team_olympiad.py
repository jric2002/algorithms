# Author: José Rodolfo (jric2002)
n = int(input())
student_skills = list(map(int, input().split(" ")))
programming_students = []
maths_students = []
pe_students = []
number_student_skill = []
for i in range(0, n):
  t = student_skills[i]
  if (t == 1):
    programming_students.append(i + 1)
  elif (t == 2):
    maths_students.append(i + 1)
  else:
    pe_students.append(i + 1)
number_student_skill.append(len(programming_students))
number_student_skill.append(len(maths_students))
number_student_skill.append(len(pe_students))
number_student_skill.sort()
w = number_student_skill[0]
print(w)
for i in range(0, w):
  print(programming_students[i], maths_students[i], pe_students[i], sep=" ")