#include<iostream>
using namespace std;
//#include<conio.h>

int main(){
	int wordcount = 1;
	int charcount = 0;
	char ch = 'a';

	while( ch != '\r'){
		cin >> ch;
		if(ch == ' ')
			wordcount++;
		else
			charcount++;
	}
	
	cout << "Character Count is: " << charcount << endl << "Word Count is: " << wordcount << endl;
	return 0;	
}
