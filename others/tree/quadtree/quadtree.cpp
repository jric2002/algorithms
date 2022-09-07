#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
class Point {
  public:
    int x, y;
    Punto(int, int);
};
class Node {
  public:
    Point p;
    Node *nw, *ne, *sw, *se;
    Node(Point, Node *, Node *, Node *, Node *);
};
class QuadTree {
  public:
    Node *root;
    QuadTree();
    void insert(Point);
    void ins(Point, Node *&);
};
int main() {
  char o;
  QuadTree qt = QuadTree();
  int x, y;
  while (true) {
    cout << "QuadTree implementation in C++" << endl;
    cout.width(20);
    cout.fill('-');
    cout << "" << endl;
    cout << "1. Insert" << endl;
    cout << "0. Exit" << endl;
    cout << "-> ";
    cin >> o;
    if (o == '1') {
      cout << "Point x, y: ";
      cin >> x >> y;
      qt.insert(Point(x, y));
    }
    else if (o == '0') {
      cout << "Leaving the program..." << endl;
      break;
    }
    else {
      cout << "That option doesn't exist...xD" << endl;
    }
  }
  return 0;
}
/* Definition */
Point::Point(int x = NULL, int y = NULL) {
  this->x = x;
  this->y = y;
}
Node::Node(Point p, Node *nw = NULL, Node *ne = NULL, Node *sw = NULL, Node *se = NULL) {
  this->p = p;
  this->nw = nw;
  this->ne = ne;
  this->sw = sw;
  this->se = se;
}
QuadTree::QuadTree() {
  root = NULL;
}
void QuadTree::insert(Point p) {
  ins(p, root);
}
void QuadTree::ins(Point p, Node *&r) {
  if (r == NULL) {
    r = new Node(p);
  }
  else {
    if (p.x < (r->p).x) {
      if (p.y < (r->p).y) {
        ins(p, r->nw);
      }
      else {
        ins(p, r->sw);
      }
    }
    else {
      if (p.y < (r->p).y) {
        ins(p, r->ne);
      }
      else {
        ins(p, r->se);
      }
    }
  }
}