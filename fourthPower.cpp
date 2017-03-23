/*Calculate the 4th power of Numbers*/

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	int power = 1;
	
	cout << "Enter the Limit: ";
	int limit;
	cin >> limit;	
	
	for(int num = 1;num <= limit; num++){
		power = num*num*num*num;

		cout << setw(4) << num << setw(10) << power << endl;
	}	

	return 0;	
}
