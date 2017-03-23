#include<iostream>
#include<cstdlib>
#include<stdio.h>
using namespace std;

int main() {
	FILE *fp;
	char ch;
	if ((fp = fopen("abc.txt", "w")) == NULL) {
		cout << "Unable to CREATE / OPEN a file";
		exit(0);
	}

	cout << "Enter content to write into file: ($ to EXIT)" << endl;

	do {
		ch = getchar();
		putc(ch, fp);
	} while (ch != '$');

	fclose(fp);
	cout << "File is written and closed";

	return 0;
}
