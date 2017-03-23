#include<iostream>
using namespace std;

int main(){
	int num;	
	cout << "Enter any Five digit Number:";
	cin >> num;

	int sum = 0;
	while(num > 0){
		int last = num % 10;
		sum += last;
		num /= 10;
	}
	
	cout << "Sum of the Digits is: " << sum << endl;
	
	return 0;
}
