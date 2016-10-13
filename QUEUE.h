#ifndef QUEUE  //  if not defined
#define QUEUE  //  define QUEUE

#include <iostream>
using namespace std;


template <class T>  //  template
class QUEUE_LIST{  //  create class QUEUE_LIST
private:  struct node{  //  node stuff
	T info;  //  info here of type T
	node *next;  //  bring me to the next room
};
		  node *front, *rear;  //  initialize front node and rear node
public:  QUEUE_LIST();  //  constructor to set nodes to node
		 void pushQueue(T);  //  push T
		 bool emptyQueue();  //  check if the queue is empty
		 T popQueue();  //  pop T
};

template<class T>
QUEUE_LIST<T>::QUEUE_LIST(){
	front = NULL; rear = NULL;  //  set to null
}

template<class T>
void QUEUE_LIST<T>::pushQueue(T x){
	node *p;  //  create node p
	p = new node;  //  p is a new node, so find space for it
	p->info = x;  //  the info inside p is x
	p->next = NULL;  //  the new node is in front, so it's pointing to nothing
	if (front == NULL){  //  if it is the first node
		front = p;  //  both front and rear point to this
		rear = p;
	}
	else{  //  if else
		rear->next= p;  //  have the last node point to this
		rear = p;  //  and change to "last node"
	}

}

template<class T>
bool QUEUE_LIST<T>::emptyQueue(){
	if (front == NULL) return true;  //  if the front points to NULL it is empty
	else return false;   //  if else than false
}

template<class T>
T QUEUE_LIST<T>::popQueue(){
	node *p = front;   //  create node p, which is like front
	T x;  //  initialize x which is type T
	x = front->info;  //  x is the info of the front node
	front = front->next;  //  push back front
	delete (p);  //  delete p 
	return x;  //  return x
}

#endif
