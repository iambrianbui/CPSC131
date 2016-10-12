#ifndef STACK
#define STACK

#include <iostream>
using namespace std;


template <class T>
class STACK_LIST{
private:  struct node{
	T info;
	node *next;
};
		  node *stack;
public:  STACK_LIST();
		 void pushStack(T);
		 bool emptyStack();
		 T popStack();
};

template<class T>
STACK_LIST<T>::STACK_LIST(){
	stack = NULL;
}

template<class T>
void STACK_LIST<T>::pushStack(T x){
	node *p;
	p = new node;
	p->info = x;
	p->next = NULL;
	if (stack == NULL){
		stack = p;
	}
	else{
		p->next = stack;
		stack = p;
	}

}

template<class T>
bool STACK_LIST<T>::emptyStack(){
	if (stack == NULL) return true;
	else return false;
}

template<class T>
T STACK_LIST<T>::popStack(){
	node *p = stack; T x;
	x = stack->info;
	stack = stack->next;
	delete (p);
	return x;
}

#endif
