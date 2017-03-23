#include<iostream>
using namespace std;

class ObjectPointerDemo{
	int x;
	public:	
	ObjectPointerDemo(int a):x(a){}
	void printX(){
		cout << "Value of x is: " << x << endl;
	}
};

int main(){
	ObjectPointerDemo op(15);
	
	ObjectPointerDemo *opPointer = &op;
	
	op.printX();
	opPointer->printX();
	
	return 0;
}
