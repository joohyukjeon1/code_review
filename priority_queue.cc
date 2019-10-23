#include "priority_queue.h"

template <>
PriorityQueue<int>::PriorityQueue(){
}

template <>
PriorityQueue<int>::~PriorityQueue(){
}

template <>
bool PriorityQueue<int>::Empty() const{
  return storage.empty();
}

template <>
int PriorityQueue<int>::Size() {
  return storage.size();
}


// Return -1 if the queue is empty
template <>
const int& PriorityQueue<int>::Top() const{
  if (storage.empty()) {
    int empty = -1;
    return empty;
  } else {
  return storage.top();
  }
}

// Pop only if the queue is not empty
template <>
void PriorityQueue<int>::Pop(){
  if (!storage.empty()) {
    storage.pop();
  }
}

template <>
void PriorityQueue<int>::Push(const int& val){
  storage.push(val);
}
