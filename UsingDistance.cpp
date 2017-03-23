#include<iostream>
#include "Distance.h"
using namespace std;

int main(){
	int i=0;
	Distance d[2];
	float ft1,inch1,ft2,inch2;
	
	cout << "1: Enter Distance: " << endl;
	cout << "Feet: "; cin >> ft1;
	cout << "Inch: "; cin >> inch1;
	Distance d1(ft1,inch1);

	cout << endl << "2: Enter Distance: " << endl;
	cout << "Feet: "; cin >> ft2;
	cout << "Inch: "; cin >> inch2;
	Distance d2(ft2,inch2);

	Distance d3;	
	
	d3.clac_dist(d1,d2);
	d3.display_distance();
	
	return 0;
}
