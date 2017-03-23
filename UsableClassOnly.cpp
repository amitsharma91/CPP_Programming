#include<iostream>
#include "constructor.h"
using namespace std;

int main(){
	int x,y;
	cout 	<< "Enter First Number: "; cin >> x;
	cout 	<< "Enter Second Number: "; cin >> y;
	
	Counter c(x,y);
	
	c.print_it();
		
	return 0;
}
