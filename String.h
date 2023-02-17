#ifndef STRING_H
#define STRING_H

#include <stdio.h>
#include <iostream>
#include <cstdlib>

class String {
	public:
		String();
		String(const char string[]);
		String(const String & string);
		~String();
		int getLength() const;
		char getChar(const int index);
		bool equals(const String & string);
		void setText(const char string[]);
		void outText();
		void operator =(const String & string);
		void operator =(const char string[]);
	private:
		char *string;
};

#endif
