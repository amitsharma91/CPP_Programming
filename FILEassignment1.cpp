#include<iostream>
#include<string.h>
using namespace std;

class Message{
	char* ptr;
	int length;
	public:	
	Message(){}
	Message(char* ptr){
		
		strncpy(this->ptr,ptr);
		//this->length = strlen(ptr);
		cout << ptr;
	}
	int getLength(){return this->length;}
};

int main(){
	char data[] ="java";
	Message m(data);
	
	return 0;
}
