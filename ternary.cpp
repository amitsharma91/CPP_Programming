#include<iostream>
using namespace std;

int main(){
	
	for(int i = 0; i < 50; i++){
		cout << (i%5==0)? ' ':i << i;		
	}	
	
	return 0;
}
