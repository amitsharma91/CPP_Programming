#include<iostream>
using namespace std;


int main(){
	int next = 0,last = 1;

	while(next < 100){
			
		cout << last << "\t";
		int sum = next + last;
		next = last;		
		last = sum;	
	}	
	cout << endl;
	return 0;
}
