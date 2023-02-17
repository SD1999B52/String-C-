#ifndef STRINGSTACK_H
#define STRINGSTACK_H

#include "String.h"

class StringStack {
	public:
		StringStack();
		~StringStack();
		int getSize();
		void push( const String & string );
		void show();
		void out();
	private:
		String *stack;
		int size;
};

#endif
