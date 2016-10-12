#ifndef QUEUE
#define QUEUE

#include <iostream>
using namespace std;


template <class T>
class QUEUE_LIST{
private:  struct node{
	t info;
	node *next;
};
		  node *front, *rear;
public:  QUEUE_LIST();
		 void pushQueue(T);
		 bool emptyQueue();
		 T popQueue();
};

template<class T>
void QUEUE_LIST<T>::QUEUE_LIST(){
	front = NULL; rear = NULL;
}

template<class T>
void QUEUE_LIST<T>::pushQueue(T x){
	node *p;
	p = new node;
	p->info = x;
	p->next = NULL;
	if (front == NULL){
		front = p;
		rear = p;
	}
	else{
		rear->next= p;
		rear = p;
	}

}

template<class T>
bool QUEUE_LIST<T>::emptyQueue(){
	if (front == NULL) return true;
	else return false;
}

template<T>
T QUEUE_LIST<T>::popQueue(){
	node *p = front; T x;
	x = front->info;
	front = front->next;
	delete (p);
	return x;
}

#endif
