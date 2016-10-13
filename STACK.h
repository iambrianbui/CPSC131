#ifndef STACK  //  if not defined
#define STACK  //  define STACK

#include <iostream>
using namespace std;


template <class T>  // template
class STACK_LIST{  //  create class STACK_LIST
private:  struct node{  //  node stuff
	T info;  //  info here of type T
	node *next;  //  bring me to the next room
};
		  node *stack;  //  initialize the first node
public:  STACK_LIST();  //  constructor sets stack to null
		 void pushStack(T);  //  push T
		 bool emptyStack();  //  check if stack is empty
		 T popStack();  //  pop T
};

template<class T>
STACK_LIST<T>::STACK_LIST(){
	stack = NULL;  //  set to null
}

template<class T>
void STACK_LIST<T>::pushStack(T x){
	node *p;  //  create node p
	p = new node;  //  p is a new node, so find space for it
	p->info = x;  //  the info inside p is x
	p->next = NULL;  //  the new node is pointing to nothing
	if (stack == NULL){  //  if stack is pointing to null
		stack = p;  //  this node is the first node
	}
	else{  //  else
		p->next = stack;  //  the next node is pointing to stack
		stack = p;  //  this is the new "first node"
	}

}

template<class T>
bool STACK_LIST<T>::emptyStack(){
	if (stack == NULL) return true;  //  if stack is empty than true
	else return false;  //  else false
}

template<class T>
T STACK_LIST<T>::popStack(){
	node *p = stack; //  create node p which is a copy of the master key
	T x;  //  initialize x which is type T
	x = stack->info;  //  x is the info of the front node
	stack = stack->next;  //  change the front node
	delete (p);  //  delete p
	return x;  //  return x
}

#endif
