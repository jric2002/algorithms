#ifndef STACK
#define STACK
template <typename T>
class Stack {
  private:
    int stack_size;
    Node<T> *top;
  public:
    Stack() {
      stack_size = 0;
      top = NULL;
    }
    int getStackSize() {
      return stack_size;
    }
    Node<T> *getTop() {
      return top;
    }
    bool isEmpty() {
      if (top != NULL) {
        return false;
      }
      else {
        return true;
      }
    }
    bool push(T value) {
      try {
        Node<T> *new_node = new Node<T>(value);
        new_node->pointTo(top);
        top = new_node;
        stack_size++;
        return true;
      }
      catch (...) {
        return false;
      }
    }
    bool pop() {
      try {
        if (top != NULL) {
          Node<T> *aux = top;
          top = top->getNext();
          stack_size--;
          delete aux;
          return true;
        }
        return false;
      }
      catch (...) {
        return false;
      }
    }
};
#endif