#include <iostream>
#include <utility>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  unsigned short int n = 4;
  short int i, j;
  short int estado;
  short int x, y;
  vector<pair<short int, short int>> coordenadas(n);
  pair<short int, short int> punto_de_encuentro;
  while (i < n) {
    cin >> x >> y;
    coordenadas.at(i) = make_pair(x, y);
    i++;
  }
  punto_de_encuentro = make_pair(0, 0);
  estado = 1;
  i = 0;
  while (i < (coordenadas.size() - 1) && estado != -1) {
    j = i + 1;
    while (j < coordenadas.size()) {
      if (estado == 1) {
        if ((coordenadas.at(i)).first == (coordenadas.at(j)).first) {
          punto_de_encuentro.first = (coordenadas.at(i)).first;
          estado = 2;
          i = -1;
          break;
        }
      }
      else {
        if ((coordenadas.at(i)).second == (coordenadas.at(j)).second) {
          punto_de_encuentro.second = (coordenadas.at(i)).second;
          estado = -1;
          break;
        }
      }
      j++;
    }
    i++;
  }
  cout << punto_de_encuentro.first << " " << punto_de_encuentro.second << endl;
  return 0;
}
/* Definition */