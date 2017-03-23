#include<iostream>
using namespace std;

//structure Distance
struct Dist{
	float inches;
	int feet;
};

//structure Room
struct Room{
	Dist length;
	Dist width;
};

int main(){	
	
	//creating structure Room Variable
	Room room;

	//Accepting Room Width:
	cout << "Enter Room width" << endl;
	cout << "Enter Width-Feet: ";
	cin >> room.width.feet;	
	cout << "Enter Width-Inches: ";
	cin >> room.width.inches;

	//Accepting Room Length:
	cout << "Enter Room Length" << endl;
	cout << "Enter Length-Feet: ";
	cin >> room.length.feet;
	cout << "Enter Length-Inches: ";
	cin >> room.length.inches;

	//Calculating Length and Width of Room
	float len = room.length.feet + (room.length.inches/12);
	float wid = room.width.feet + (room.width.inches/12);

	cout << "Total Area of Room is " << (len * wid) << "square Feet";
	
	return 0;
}
