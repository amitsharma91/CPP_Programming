/*Calculate Factorial*/

#include <iostream>
using namespace std;

int main(){
	/*
	cout << "Enter any number to calculate Factorial: ";
	int num;cin >> num;


	cout << "Number is: " << num;
	
	int f = 1;
	while(num > 0){
		f = f*num;
		num--;
	}

	cout << "Factorial is: " << f << endl;
	*/

	
	int fact = 1;
	cout << "Enter any number to calculate Factorial: ";
	int num;cin >> num;

	for(int i=num;i>0;i--){
		fact = fact * i;
	}
	
	cout << "Factorial is: " << fact << endl;
	
	return 0;
}
