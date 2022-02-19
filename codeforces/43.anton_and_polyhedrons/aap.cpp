#include <iostream>
#include <cstring>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
struct Polyhedron {
  string name;
  unsigned short int faces;
};
int main() {
  struct Polyhedron tetrahedron = {"Tetrahedron", 4};
  struct Polyhedron cube = {"Cube", 6};
  struct Polyhedron octahedron = {"Octahedron", 8};
  struct Polyhedron dodecahedron = {"Dodecahedron", 12};
  struct Polyhedron icosahedron = {"Icosahedron", 20};
  vector<Polyhedron> polyhedrons;
  polyhedrons.push_back(tetrahedron);
  polyhedrons.push_back(cube);
  polyhedrons.push_back(octahedron);
  polyhedrons.push_back(dodecahedron);
  polyhedrons.push_back(icosahedron);
  unsigned int n, total_num_faces = 0;
  string name_polyhedron;
  cin >> n;
  for (unsigned int i = 0; i < n; i++) {
    cin >> name_polyhedron;
    for (vector<Polyhedron>::iterator it = polyhedrons.begin(); it != polyhedrons.end(); it++) {
      if (name_polyhedron == (*it).name) {
        total_num_faces += (*it).faces;
      }
    }
  }
  cout << total_num_faces << endl;
  return 0;
}