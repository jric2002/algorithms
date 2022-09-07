#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
class Node {
  public:
    int value;
    Node *next;
    Node(int, Node *);
};
class LL {
  public:
    Node *front;
    LL();
    void insert(int);
    void ins(int, Node *&);
    void remove(int);
    void del(int, Node *&);
    void display();
};
int main() {
  LL l;
  char o;
  int data;
  while (true) {
    l.display();
    cin >> o;
    if (o == 'i') {
      cout << "Enter a data: ";
      cin >> data;
      l.insert(data);
    }
    else if (o == 'r') {
      cout << "Remove data: ";
      cin >> data;
      l.remove(data);
    }
    else if (o == 'e') {
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
Node::Node(int value = 0, Node *next = NULL) {
  this->value = value;
  this->next = next;
}
LL::LL() {
  front = NULL;
}
void LL::insert(int data) {
  ins(data, front);
}
void LL::ins(int data, Node *&n) {
  if (n == NULL) {
    n = new Node(data);
  }
  else {
    ins(data, n->next);
  }
}
void LL::remove(int data) {
  del(data, front);
}
void LL::del(int data, Node *&n) {
  if (n != NULL) {
    if (data == n->value) {
      Node *a = n;
      n = n->next;
      delete a;
    }
    else {
      del(data, n->next);
    }
  }
}
void LL::display() {
  Node *a;
  cout << "-> ";
  for (a = front; a != NULL; a = a->next) {
    cout << "(" << a->value << ") -> ";
  }
}