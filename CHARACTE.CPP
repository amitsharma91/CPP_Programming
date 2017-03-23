#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int wdcnt = 1,chrcnt = 0;
	char ch = 'a';
	cout << "Enter some Text: " << endl;
	while( (ch = getchar()) != '\r')
	{
		if(ch == ' ')
			wdcnt++;
		else
			chrcnt++;
	}
	cout << endl <<	 "Word Count is: " << wdcnt << endl;
	cout << "Character Count is: " << chrcnt;

	return 0;
}
