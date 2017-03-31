#include <iostream>
using namespace std;


int gcd(int n1,int n2){
	if(n2!=0)
		return gcd(n2,n1%n2);
	else
		return n1;	
}

int main(){
	int n1,n2;
	cout << "Enter 1st no:";
	cin >> n1;
	
	cout << "Enter 2nd no:";
	cin >> n2;

	cout << "G.C.D is: " << gcd(n1,n2);
	return 0;
}
