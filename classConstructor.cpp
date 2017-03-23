#include<iostream>
using namespace std;

class Counter{
	int x,y;
	
	public:
	//constructor
	Counter(int x,int y){
		this->x = x;
		this->y = y;	
	}

	//print function
	void print_it(){
		cout << "X: " << x << endl << "Y: " << y;	
	}
};

int main(){
	int x,y;
	cout 	<< "Enter First Number: "; cin >> x;
	cout 	<< "Enter Second Number: "; cin >> y;
	
	Counter c(x,y);
	
	c.print_it();
		
	return 0;
}
