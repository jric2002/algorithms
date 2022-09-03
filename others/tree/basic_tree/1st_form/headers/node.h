#ifndef NODE
#define NODE
template <typename T>
class Node {
  private:
    T value;
    Node *left_child;
    Node *right_child;
  public:
    Node(T value) {
      this->value = value;
      left_child = NULL;
      right_child = NULL;
    }
    T getValue() {
      return value;
    }
    Node<T> *getLeftChild() {
      return left_child;
    }
    Node<T> *getRightChild() {
      return right_child;
    }
    bool setValue(T value) {
      try {
        this->value = value;
        return false;
      }
      catch (...) {
        return false;
      }
    }
    bool setLeftChild(Node *lc) {
      try {
        left_child = lc;
        return true;
      }
      catch (...) {
        return false;
      }
    }
    bool setRightChild(Node *rc) {
      try {
        right_child = rc;
        return true;
      }
      catch (...) {
        return false;
      }
    }
};
#endif