//use of setw manipulator

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	long pop1 = 21459778,pop2=52416390,pop3=541526390;
	
	/*
	cout << "CityName " << "Population" << endl;
	cout << "PuneCity " << pop1 << endl;
	cout << "GoaCity " << pop2 << endl;
	cout << "DelhiCity " << pop3 << endl;
	*/
	
	cout	<< setw(9) << "CityName" << setw(12) << "Population" << endl
			<< setw(9) << "PuneCity" << setw(12) << pop1 << endl
			<< setw(9) << "GoaCity" << setw(12) << pop2 << endl
			<< setw(9) << "DelhiCity" << setw(12) << pop3 << endl; 

	return 0;
}
