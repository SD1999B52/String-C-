#include "String.h"

//конструктор А
String::String() {
	string = new char[1];
	
	string[0] = '\0';
}

//конструктор B
String::String(const char string[]) {
	int length = 0;
	
	while (string[length] != '\0') {
        length++;
    }
    
    this->string = new char[length];
    
    for (int i = 0; i < length; i++) {
    	this->string[i] = string[i];
	}
}

//конструктор копирования
String::String(const String & string) {
	int length = string.getLength();
	
	this->string = new char[length];
	
	for (int i = 0; i < length; i++) {
		this->string[i] = string.string[i];
	}
}

//деструктор
String::~String() {
	delete[] string;
}

//получить длинну строки
int String::getLength() const {
	int length = 0;
	
	while (string[length] != '\0') {
		length++;
	}
	
	return length;
}

//получить сомвол из строки
char String::getChar(const int index) {
	return string[index];
}

//сравнить строки
bool String::equals(const String & string) {
	int stringALength = string.getLength();
	int stringBLength = getLength();
	
	if (stringALength == stringBLength) {
		for (int i = 0; i < stringALength; i++) {
			if (this->string[i] != string.string[i]) {
				return false;
			}
		}
		
		return true;
	}
	
	return false;
}

//задать текст
void String::setText(const char string[]) {
	delete[] this->string;
	
	int length = 0;
	
	while (string[length] != '\0') {
		length++;
	}
    
    this->string = new char[length];
    
    for (int i = 0; i < length; i++) {
    	this->string[i] = string[i];
	}
}

//вывод текста
void String::outText() {
	for (int i = 0; i < getLength(); i++) {
		printf("%c", string[i]);
	}
	
	printf("\n");
}

//операция присваивания
void String::operator = (const String & string) {
	delete[] this->string;
	
	int length = string.getLength();
    
    this->string = new char[length];
    
    for (int i = 0; i < length; i++) {
    	this->string[i] = string.string[i];
	}
}

//операция присваивания
void String::operator = (const char string[]) {
	delete[] this->string;
	
	int length = 0;
	
	while (string[length] != '\0') {
		length++;
	}
    
    this->string = new char[length];
    
    for (int i = 0; i < length; i++) {
    	this->string[i] = string[i];
	}
}
