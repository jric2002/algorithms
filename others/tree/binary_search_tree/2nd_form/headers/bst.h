#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE
template <typename T>
class BST {
  public:
    Node<T> *root;
    BST() {
      root = NULL;
    }
    bool insert(T data) {
      try {
        ins(data, root);
        return true;
      }
      catch (...) {
        return false;
      }
    }
    void ins(T data, Node<T> *&r) {
      if (r == NULL) {
        r = new Node<T>(data);
      }
      else if (data < r->value) {
        ins(data, r->left);
      }
      else {
        ins(data, r->right);
      }
    }
};
#endif