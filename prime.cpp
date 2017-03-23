#include <iostream>
using namespace std;
#include <stdlib.h>

int main(){
	int n;
	cout << "Enter a number: ";
	cin >> n;
		
	for(int i= 2; i < (n/2);i++){
		if(n%i == 0){
			cout << n <<" is not Prime" << endl;	
			exit(0);
		}
	}
	cout << n << " is a Prime Number" << endl;	
	return 0;
}
