#ifndef NODE
#define NODE
template <typename T>
class Node {
  private:
    T value;
    Node *next;
  public:
    Node(T value) {
      this->value = value;
      next = NULL;
    }
    Node *getNext() {
      return next;
    }
    T getValue() {
      return value;
    }
    bool pointTo(Node *n) {
      try {
        next = n;
        return true;
      }
      catch (...) {
        return false;
      }
    }
};
#endif