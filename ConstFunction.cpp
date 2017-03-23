#include<iostream>
using namespace std;

class ConstFunction{
	int x;
	public:
	ConstFunction(int a):x(a){}
	
	void print() const{
		cout << x << endl;
	}	
};

int main(){
	ConstFunction c(55);
	c.print();
	c.print();
	c.print();
	
	const ConstFunction c2(98);
	c2.print();
	
	return 0;
}
