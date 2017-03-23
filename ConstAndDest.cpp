#include<iostream>
using namespace std;

class ConstAndDest{
	public:
	ConstAndDest(){
		cout << "Constructor is executed..." << endl;
	}
	~ConstAndDest(){
		cout << "Destructor is executed..." << endl;
	}
};

int main(){
	ConstAndDest c;
	cout << "This statement is being executed into main() method" << endl;
}
