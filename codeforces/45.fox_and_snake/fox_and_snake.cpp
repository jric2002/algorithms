#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
void draw(char object, unsigned short int length);
int main() {
  unsigned short int n, m;
  char snake = '#';
  char empty_cell = '.';
  char draw_snake_tail = 'e'; // begin = b or end = e
  cin >> n >> m;
  for (unsigned short int r = 1; r <= n; r++) {
    if ((r % 2) != 0) {
      draw(snake, m);
    }
    else {
      if (draw_snake_tail == 'e') {
        draw(empty_cell, (m - 1));
        cout << snake;
        draw_snake_tail = 'b';
      }
      else {
        cout << snake;
        draw(empty_cell, (m - 1));
        draw_snake_tail = 'e';
      }
    }
    cout << endl;
  }
  return 0;
}
void draw(char object, unsigned short int length) {
  for (unsigned short int i = 1; i <= length; i++) {
    cout << object;
  }
}