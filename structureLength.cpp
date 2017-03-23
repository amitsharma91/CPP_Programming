#include<iostream>
using namespace std;


//Structure Distance
struct Dist{
	float inches;
	int feet;
};

int main(){
	
	//creating Structure Variable
	Dist d2,d3;

	//defining Values for Variables:
	Dist d1 = {6.75,5};	

	cout << "Enter the Length:" << endl;
	cout << "Enter the Feet: ";
	cin >> d2.feet;

	cout << "Enter th Inches: ";
	cin >> d2.inches;
	
	//calculating Inches
	d3.feet = 0;
	d3.inches = d1.inches + d2.inches;	
	if((d3.inches) >= 12.0){
		d3.inches -= 12.0;
		d3.feet++;
	}

	//calculating Feet	
	d3.feet += d1.feet + d2.feet;

	cout << "Length Input" << endl;
	cout << "1.) " << d1.feet << "' - " << d1.inches << "\"" << endl;
	cout << "2.) " << d2.feet << "' - " << d2.inches << "\"" << endl;
	cout << "Total Length is: " << d3.feet << "' - " << d3.inches << "\"" << endl;
	
	return 0;
}
