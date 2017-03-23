#include<iostream>
using namespace std;

int main(){
	int den,num;
	char ch;
	
	do{
		cout << "Enter the Denominator: ";
		cin >> den;
		cout << "Enter the Numerator: ";
		cin >> num;
	
		cout << "Division is: " << num/den << endl;
		cout << "Remainder is: " << num%den << endl;

		cout << "Do you to continue...(y/n)";
		cin >> ch;		
		 
	}
	while(ch != 'n');	

	cout << "Bye...Bye..." << endl;	
		
	return 0;
}
