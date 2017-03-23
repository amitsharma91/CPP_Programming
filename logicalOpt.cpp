#include<iostream>
using namespace std;

int main(){
	int x,y;
	char c;
	do{
		cout << "Enter x-cordinates: ";
		cin >> x;

		cout << "Enter y-cordinates: ";
		cin >> y;
	
		if( !(x%7) && !(y%7))	
		{
			cout << "Yes Got the Treasure";
		}
		else
		{
			cout << "sorry your failed to grt Treasure";
		}
		cout << "(cont...[y/n]): ";cin >> c;
	}while(c != 'n');

	return 0;
}
