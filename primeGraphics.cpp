#include<iostream>
using namespace std;


int main(){
	
	unsigned char WHITE = 219;
	unsigned	char GRAY = 176;
	unsigned char ch;

	for(int i=0; i < 80*25-1; i++){
		ch = WHITE;
		for(int j = 2 ;j < i;j++){
			if(i%j == 0){
				ch = GRAY;
				break;
			}
		cout << ch;
		}
	}

	return 0;
}
