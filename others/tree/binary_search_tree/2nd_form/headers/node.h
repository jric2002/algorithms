#ifndef NODE
#define NODE
template <typename T>
class Node {
  public:
    T value;
    Node<T> *left, *right;
    Node(T value, Node<T> *left = NULL, Node<T> *right = NULL) {
      this->value = value;
      this->left = left;
      this->right = right;
    }
};
#endif