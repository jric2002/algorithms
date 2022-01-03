#ifndef LINKED_LIST
#define LINKED_LIST
template <typename T>
class LinkedList {
  private:
    int list_size;
    Node<T> *first;
    Node<T> *last;
  public:
    LinkedList() {
      list_size = 0;
      first = NULL;
      last = NULL;
    }
    int getListSize() {
      return list_size;
    }
    Node<T> *getFirst() {
      return first;
    }
    Node<T> *getLast() {
      return last;
    }
    bool isEmpty() {
      if (first != NULL) {
        return false;
      }
      else {
        return true;
      }
    }
    bool pushFirst(T value) {
      try {
        Node<T> *new_node = new Node<T>(value);
        if (first == NULL) {
          first = new_node;
          last = new_node;
        }
        else {
          new_node->pointTo(first);
          first = new_node;
        }
        return true;
      }
      catch (...) {
        return false;
      }
    }
    bool pushLast(T value) {
      try {
        Node<T> *new_node = new Node<T>(value);
        if (last == NULL) {
          first = new_node;
          last = new_node;
        }
        else {
          last->pointTo(new_node);
          last = new_node;
        }
        return true;
      }
      catch (...) {
        return false;
      }
    }
    bool popFirst() {
      try {
        if (first != NULL) {
          Node<T> *aux = first;
          first = first->getNext();
          delete aux;
          return true;
        }
        else {
          return false;
        }
      }
      catch (...) {
        return false;
      }
    }
    bool popLast() {
      try {
        if (last != NULL) {
          Node<T> *aux_one = last;
          Node<T> *aux_two = first;
          while (aux_two->getNext() != NULL) {
            aux_two = aux_two->getNext();
          }
          aux_two->pointTo(NULL);
          last = aux_two;
          delete aux_one;
          return true;
        }
        else {
          return false;
        }
      }
      catch (...) {
        return false;
      }
    }
};
#endif