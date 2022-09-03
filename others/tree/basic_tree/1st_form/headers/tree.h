#ifndef TREE
#define TREE
template <typename T>
class Tree {
  private:
    int tree_size;
    Node *root;
  public:
    Tree() {
      tree_size = 0;
      root = NULL;
    }
    Node<T> getRoot() {
      return root;
    }
    bool pushRoot(T value) {
      if (root == NULL) {
        Node<T> *new_node = new Node<T>(value);
        root = new_node;
        return true;
      }
      else {
        return false;
      }
    }
    Node<T> *pushLeft(Node<T> *father, T value) {
      if (father != NULL) {
        Node<T> *new_node = new Node<T>(value);
        father->setLeftChild(new_node);
        return new_node;
      }
      else {
        return NULL;
      }
    }
    Node<T> *pushRight(Node<T> *father, T value) {
      if (father != NULL) {
        Node<T> *new_node = new Node<T>(value);
        father->setLeftChild(new_node);
        return new_node;
      }
      else {
        return NULL;
      }
    }
};
#endif