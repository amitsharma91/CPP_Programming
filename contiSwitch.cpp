#include<iostream>
using namespace std;

int main(){
	int a,b;
	char ch;	

	do{
		cout << "Enter First Number: ";
		cin >> a;
		cout << "Enter Second Number: ";
		cin >> b;
		
		cout << "Select Operation Below:" << endl;
		cout << "1. Addition\n" << "2. Subtraction\n" << "3. Multiplication\n" << "4. Division";
		int choice;
		cin >> choice;
	
		switch(choice){
			case 1:
					cout << "Addition is: " << a+b;break;
			case 2:
					cout << "Subtraction is: " << a-b;break;
			case 3: 
					cout << "Multiplication is: " << a*b;break;
			case 4: 
					cout << "Division is: " << a/b;break;
			default: cout << "Sorry Invalid Entry."; 				
		}		

		cout << endl << "Do you want to continue...(y/n): ";
		cin >> ch;
	}
	while(ch != 'n');
	
	return 0;
}
