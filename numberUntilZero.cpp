/*
	Program to accept number until user Enters 0 
*/

#include <iostream>
using namespace std;

int main(){
	
	int sum = 0;

	for(int i=1;i>0;)
	{
		cout << "Enter a number: ";cin >> i;
		sum +=i;
	}

	cout << "Sum of Numbers is: " << sum <<endl;
	return 0; 
}
