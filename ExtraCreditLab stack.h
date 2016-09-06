#ifndef Stack  //  if there is no Stack header
#define Stack  //  define the Stack header
  
template <class TYPE, int INDEX>  //  template, class TYPE because we do not know the type, but we know the second value must be an integer

class STACK{  //  BEGIN CLASS MAKING
private:    //  don't touch 
	TYPE elt[INDEX];  //  array of elements
	int counter;  //  counter of "trays"
	  
public:

	void clearStack();  //  works as a constructor that can be called repeatedly
	bool emptyStack();  //  checks if the stack is empty
	bool fullStack();  //  checks if the stack is full
	void pushStack(int x);  //  insert trays
	void pushStack(std::string x);  //  OVERLOAD WOAHHHHH for strings, I think this could be a template too, but not too sure....
	TYPE popStack();  //  take out trays
};

template <class TYPE, int INDEX>  //  gotta do this everytime, especially in the definitions
void STACK<TYPE, INDEX>::clearStack(){  //  clear stack function
	counter = 0;  //  set the counter to 0
}

template <class TYPE, int INDEX>
bool STACK<TYPE, INDEX>::emptyStack(){  //  empty stack function
	return (counter == 0) ? true : false;  //  RETURN TRUE if counter == 0, else false
}

template <class TYPE, int INDEX>
bool STACK<TYPE, INDEX>::fullStack(){  //  full stack function
	return (counter == INDEX) ? true : false;  //  RETURN TRUE if counter == the index,  admittedly this was counter == 5 and I got really lucky changing it to index pHEW
}

template <class TYPE, int INDEX>
void STACK<TYPE, INDEX>::pushStack(int x){  //  push stack function for integers
	elt[counter] = x;  //  have x be the tray
	counter++;  //  increase the counter
}

template <class TYPE, int INDEX>
void STACK<TYPE, INDEX>::pushStack(std::string x){  //  push stack function of strings
	elt[counter] = x;  //  have x be the tray
	counter++;  //  increase the counter
}

template <class TYPE, int INDEX>
TYPE STACK<TYPE, INDEX>::popStack(){  //  pop stack function,  THIS HAS TO BE TYPE AND NOT INT!!!! because of THIS, i'm PRETTY SURE (?) I didn't have to overload, and I could have made main 6 lines (?), but this program does
	//  just fine
	counter--;  //  decrease the counter
	return elt[counter];  //  return the value
}

#endif
