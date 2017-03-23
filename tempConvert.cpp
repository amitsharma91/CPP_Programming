#include <iostream>
using namespace std;

int main(){
	int ftemp;

	cout << "Enter the Temprature in Fahrenhite: ";
	cin >> ftemp;

	int ctemp = (ftemp-32)*5/9;
	
	cout << "Celcious Equivalent of " << ftemp << "F is: " <<ctemp;
	
	return 0;
}
