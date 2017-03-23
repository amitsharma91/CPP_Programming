//Calculate Area Of Circle
#include <iostream>
#define PII 3.142
using namespace std;

int main(){
	//double AND long double

	double d = 1.2356546546;
	long double ld = 35.564789121305456;
	
	cout << "Size of double is: " << sizeof d << endl;
	cout << "Size of long-double is: " << sizeof ld << endl;

	/*
	float radius;
	const float PI = 3.142F;
	cout << "Enter the Radius of a Circle: ";
	cin >> radius;
	
	//float area = PI*(radius*radius);
	float area = PII*(radius*radius);
	
	cout << "Area of a Circle is: " << area << endl;
	*/
	return 0;
}
