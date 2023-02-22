#include <iostream>
#include "String.h"
#include "StringStack.h"

using namespace std;

int main(int argc, char **argv) {
    String wordA("Hello\0");
	String wordB(" world\0");
	String wordC();
	
	wordB = "world";
	
	StringStack list;
	list.push(wordA);
	list.push(wordB);
	list.out();
	
	system("pause");
    
    return 0;
}
