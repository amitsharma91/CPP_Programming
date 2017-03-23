#include <iostream>
using namespace std;
int main(){
	int n;
	int flag = 0;
	cout << "Enter a number: ";
	cin >> n;

	for(int i= 2; i <= (n/2);i++){
		if(n%i == 0){
			flag = 1;break;
		}
	}
	if(flag)
		cout<< n << " is NOT Prime" << endl;
	else
	cout << n << " is a Prime Number" << endl;
	return 0;
}
