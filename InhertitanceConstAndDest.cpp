#include<iostream>
using namespace std;

class Super{
	public: 	
	Super(){
		cout << "This is Super Constructor..." << endl;
	}
	~Super(){
		cout << "This is Super Destructor..." << endl;
	}
};

class Sub: public Super{
	public:
	Sub(){cout << "This is Sub Constructor..." << endl;}
	~Sub(){cout << "This is Sub Destructor..." << endl;}
};

int main(){
	Sub sub;
	return 0;
}
