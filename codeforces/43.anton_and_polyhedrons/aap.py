# Author: José Rodolfo (jric2002)
n = int(input())
polyhedrons = [
  dict(name = "Tetrahedron", faces = 4),
  dict(name = "Cube", faces = 6),
  dict(name = "Octahedron", faces = 8),
  dict(name = "Dodecahedron", faces = 12),
  dict(name = "Icosahedron", faces = 20)
]
total_num_faces = 0
for i in range(0, n):
  name_polyhedron = str(input())
  for polyhedron in polyhedrons:
    if (name_polyhedron == polyhedron["name"]):
      total_num_faces += polyhedron["faces"]
print(total_num_faces)