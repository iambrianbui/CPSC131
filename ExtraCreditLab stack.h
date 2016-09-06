#ifndef Stack
#define Stack

template <class TYPE, int INDEX>

class STACK{
private:  
	TYPE elt[INDEX];
	int counter;

public:

	void clearStack();
	bool emptyStack();
	bool fullStack();
	void pushStack(int x);
	int popStack();
};

template <class TYPE, int INDEX>
void STACK<TYPE, INDEX>::clearStack(){
	counter = 0;
}

template <class TYPE, int INDEX>
bool STACK<TYPE, INDEX>::emptyStack(){
	return (counter == 0) ? true : false;
}

template <class TYPE, int INDEX>
bool STACK<TYPE, INDEX>::fullStack(){
	return (counter == 5) ? true : false;
}

template <class TYPE, int INDEX>
void STACK<TYPE, INDEX>::pushStack(int x){
	elt[counter] = x;
	counter++;
}

template <class TYPE, int INDEX>
int STACK<TYPE, INDEX>::popStack(){
	counter--;
	return elt[counter];
}

#endif
