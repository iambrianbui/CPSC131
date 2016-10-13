#ifndef ORDER  //  if not defined
#define ORDER  //  then define ORDER

#include <iostream>
using namespace std;


template <class T>  //  template
class ORDERED_LIST{
private:  struct node{  //  node stuffs
	T info;  //  info of type t
	node *next; //  bring me to the next door
};
		  node *list;  //  master key
public:  ORDERED_LIST();   //  constructor
		 void insert(T);  //  insert t
		 void display();  //  display linked list
};

template<class T>
ORDERED_LIST<T>::ORDERED_LIST(){
	list = NULL;  //  set the master key to null
}

template<class T>
void ORDERED_LIST<T>::insert(T x){
	node *p = list, *q = list, *r;  //  create new copies of keys and nodes
	r = new node;  //  create a new node, make space for it
	r->info = x;  //  the info inside this new node is x
	r->next = NULL;  //  it points to nothing
	//  find where to put the new node

	while (p != NULL && x > p->info){   //  if p is not null and the new info is greater than p's info
		q = p;  //  change the chaser
		p = p->next;  //  go to the next door
	}

	if (p == list){  //  if x is the first node
		list = r;  //  make the new node the master ky
		r->next = p;  //  have p point to this new node
	}

	else if (p == NULL){  //  if x is the last node
		q->next = r;  //  put it at the end
	}

	else {  //  if neither nor
		r->next = p;  //  put it at the middle
		q->next = r;
	}
}

template<class T>
void ORDERED_LIST<T>::display(){
	node *p = list;  //  make a new key copy
	while (p != NULL){  //  while it is pointing to osmething
		cout << p->info << "->";  //  print the info
		p = p->next;  //  next door
	}
	cout << "NULL" << endl;
}

#endif
