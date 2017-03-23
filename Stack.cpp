#include<iostream>
using namespace std;

class Stack{
	//static const int MAX;	
	enum {MAX = 10};	
	int st[MAX];
	public:
	int top
	Stack(): top(0){}
	void push(int num){
		st[++top] = num;
	}
	
	int pop(){
		return st[top--];
	}
};

//const int Stack::MAX = 10;

int main(){

	return 0;
}
