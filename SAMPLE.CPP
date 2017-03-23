#include <iostream>
using namespace std;

int main(){
	int  a,b;
	long x=2836734L;
	short y=25;
	//__int64 = 9876543210123456789;
	char ch='a';
	double d = 465.9876546;
	float f = 4554.5465f;
	
	a = 10;
	b = a+20;
	cout << "Value of b is: "<<endl << b;
	cout << endl << "Size of int-b is: " << sizeof b;
	cout << endl << "Size of long-x is: " << sizeof x;
	cout << endl << "Size of short-y is: " << sizeof y;
	cout << endl << "Size of char-ch is: " << sizeof ch;
	cout << endl << "Size of double-d is: " << sizeof d;
	cout << endl << "Size of float-f is: " << sizeof f;
	cout << endl << "ASCII Vlaue of ch is: " << (int)ch << endl ;
	return 0;
}
