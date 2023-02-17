#include "StringStack.h"

StringStack::StringStack() {
	size = 0;
	
	stack = new String[0];
}

StringStack::~StringStack() {
	delete [] stack;
	
	printf( "%s\n", "StringStack destructor" );
}

//получить количество элементов в стеке
int StringStack::getSize() {
	return size;
}

//добавить элемент в стек
void StringStack::push( const String & string ) {
	String *buffer = new String[size + 1];
	
	for ( int i = 0; i < size; i++ ) {
		buffer[i] = stack[i];
	}
	
	buffer[size] = string;
	
	size++;
	
	delete [] stack;
	
	stack = new String[size];
	
	for ( int i = 0; i < size; i++ ) {
		stack[i] = buffer[i];
	}
	
	delete [] buffer;
}

//вывод строк
void StringStack::out() {
	for ( int i = 0; i < size; i++ ) {
		stack[i].outText();
	}
}