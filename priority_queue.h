#ifndef PRIORITY_QUEUE_H_
#define PRIORITY_QUEUE_H_

#include <queue>

template <typename T> 
class PriorityQueue {
 private:
  std::priority_queue<T> storage;

 public:
  PriorityQueue();
  ~PriorityQueue();
  bool Empty() const;
  const T& Top() const;
  int Size();
  void Push(const T&);
  void Pop();	
};

#endif		// PRIORITY_QUEUE_H_