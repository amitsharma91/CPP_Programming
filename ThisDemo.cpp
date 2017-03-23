#include<iostream>
using namespace std;

class ThisDemo{
	int x;
	public:
	ThisDemo(int a): x(a){}
	void show();
};

void ThisDemo::show(){
	cout << "x: " << x << endl;
	cout << "this->x: " << this->x << endl;
	cout << "(*this).x: " << (*this).x << endl;
} 

int main(){
	ThisDemo td(56);
	td.show();
	return 0;
}
