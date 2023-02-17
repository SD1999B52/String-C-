#include "String.h"

//����������� �
String::String() {
	string = new char[1];
	
	string[0] = '\0';
}

//����������� B
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

//����������� �����������
String::String(const String & string) {
	int length = string.getLength();
	
	this->string = new char[length];
	
	for (int i = 0; i < length; i++) {
		this->string[i] = string.string[i];
	}
}

//����������
String::~String() {
	delete[] string;
}

//�������� ������ ������
int String::getLength() const {
	int length = 0;
	
	while (string[length] != '\0') {
		length++;
	}
	
	return length;
}

//�������� ������ �� ������
char String::getChar(const int index) {
	return string[index];
}

//�������� ������
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

//������ �����
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

//����� ������
void String::outText() {
	for (int i = 0; i < getLength(); i++) {
		printf("%c", string[i]);
	}
	
	printf("\n");
}

//�������� ������������
void String::operator = (const String & string) {
	delete[] this->string;
	
	int length = string.getLength();
    
    this->string = new char[length];
    
    for (int i = 0; i < length; i++) {
    	this->string[i] = string.string[i];
	}
}

//�������� ������������
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
