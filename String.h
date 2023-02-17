#ifndef STRING_H
#define STRING_H

#include <stdio.h>
#include <iostream>
#include <cstdlib>

class String {
	public:
		String();//конструктор A
		String( const char string[] );//конструктор B
		String( const String & string );//конструктор копирования
		~String();//деструктор
		int getLength() const;//получить длинну строки
		char getChar( const int index );//получить символ строки
		bool equals( const String & string );//сравнить строки
		void setText( const char string[] );//задать текст
		void outText();//вывод текста
		void operator =( const String & string );//операция присваивания
		void operator =( const char string[] );//операция присваивания
	private:
		char *string;
};

#endif
