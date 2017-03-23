#include<iostream>
using namespace std;

class Demo{
	
	public: 
	int a,b,c;
	
	Demo() : a(0),b(0),c(0){static int l = 0; cout << endl << "Object Created - " <<++l << endl; }
};

int main(){
	
	Demo d;
	cout << d.a << endl << d.b << endl<< d.c;
	//cout << endl << "l: " << l;
	Demo d2;
	Demo d3;
	
	return 0;	
}
