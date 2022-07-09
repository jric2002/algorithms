#ifndef QUEUE
#define QUEUE
template <typename T>
class Queue {
  private:
    int queue_size;
    Node<T> *first;
    Node<T> *last;
  public:
    Queue() {
      queue_size = 0;
      first = NULL;
      last = NULL;
    }
    int getQueueSize() {
      return queue_size;
    }
    Node<T> *getFirst() {
      return first;
    }
    Node<T> *getLast() {
      return last;
    }
    bool isEmpty() {
      if (first != NULL) {
        return true;
      }
      else {
        return false;
      }
    }
    bool push(T value) {
      try {
        Node<T> *new_node = new Node<T>(value);
        if (first == NULL) {
          first = new_node;
          last = new_node;
        }
        else {
          last->pointTo(new_node);
          last = new_node;
        }
        queue_size++;
        return true;
      }
      catch (...) {
        return false;
      }
    }
    bool pop() {
      try {
        if (first != NULL) {
          Node<T> *aux = first;
          first = first->getNext();
          queue_size--;
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