#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

int length(char str[]){
	int i=0;int count = 0;
	while(str[i]!='\0'){
		count++;i++;
	}
	return count;
}

int main(){
	/*const int MAX = 1500;
	char str[MAX];
	
	cout << "Enter a String: ";
	cin.get(str , MAX, '$');
	//gets(str);
	
	cout << "\nEntered String is:\n" << str;
	*/
	
	/**********************************************/
	
	/*char st[] = "Hello This is dev.amit, working with C++ Strings";
	cout << "st.length(): "<< strlen(st) << endl;
	const int MAX = 80;
	
	char stCpy[MAX];
	
	int i;
	for(i=0;i< strlen(st);i++){
		stCpy[i] = st[i];	
	}stCpy[i] = '\0';	
	
	cout << "st:\n" << st<<  endl;
	cout << "stCpy:\n" << stCpy << endl << strlen(stCpy) << endl;
	//cout << "AMIt-LENGTH(): " << length(stCpy) << endl;
	*/
	return 0;
}
