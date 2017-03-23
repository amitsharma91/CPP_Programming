#include<cstdio.h>
#include<iostream>
using namespace std;

int main(){
	FILE* fp;
	char ch;

	if((fp = fopen("abc.txt","r"))==NULL){
		cout << "Failed to open file!";
		return 0;
	}

	ch = getc(fp);
	while(ch != EOF){
		putchar(ch);
		ch = getc(fp);
	}

	fclose(fp);
	return 0;
}
