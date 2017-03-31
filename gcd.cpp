#include <iostream>
using namespace std;

int main(){
	int n1,n2,i,gcd;
	cout << "Enter 1st no:";
	cin >> n1;
	
	cout << "Enter 2nd no:";
	cin >> n2;

	for(i=1;i<=n1 && i<n2;++i)
	{
		if(n1%i==0 && n2%i==0)
			gcd = i;
	}
	cout << "GCD is: " << gcd << endl;
	
	return 0;
}
