#include<iostream>
using namespace std;

class Super{
	int x;
	public: 
	Super():x(98){}
	void show(){
		cout << "printing Value of X:" << this->x << endl;
	}
};

class Sub: public Super{

};

int main(){
	Sub sub;
	sub.show();
	return 0;
}
