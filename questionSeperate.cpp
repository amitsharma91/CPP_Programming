#include<iostream>
using namespace std;


int main(){
	float num,floating;
	int decimal;

	cout << "Enter a floating point Number:";
	cin >> num;
	
	decimal = num;
	floating = num - decimal;

	cout << "Number Seperation is: Decimal -> " << decimal << " Point -> " << floating << endl;	
	
	return 0;
}
