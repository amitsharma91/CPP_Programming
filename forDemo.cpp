#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	cout << "Enter the number:";
	int num;cin >> num;

	for(int i=0;i<=num;i++){
		//cout << "Square of " << i << " is: " << (i*i) << endl;
		cout << setw(4) << i << setw(6) << (i*i) << endl;
	}

	return 0;
}
