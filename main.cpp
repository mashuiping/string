#include <iostream>
#include "mystring.h"

using namespace std;

int main(){
	String string1 = "hello world";
	cout << "string1:	" << string1 << endl;
	String string2(string1);
	cout << "string2:	" << string2 << endl;
	String string3 = string1 + string2;
	cout << "string3:	" << string3 << endl;
	cout << "length of string1:	" << string1.getLength() << endl;
	cout << "length of string2:	" << string2.getLength() << endl;
	cout << "length of string3:	" << string3.getLength() << endl;
}
