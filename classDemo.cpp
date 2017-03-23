#include<iostream>
using namespace std;


class Demo{
	int x;

	void setX(int z){
		x = z;
	}
		
	int getX(){
		return x;
	}
};


int main(){
	int a = 10;
	
	Demo d;
	
	//d.setX(a);
	//cout << "Value of X: " << d.getX();
	
	return 0;	
}
