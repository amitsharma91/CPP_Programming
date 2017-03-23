#include<iostream>
using namespace std;

class StaticDemo{
	static int x;
	public: 
	StaticDemo(){x++;cout << "Object count is: " << x << endl;}
};
int StaticDemo::x = 0;

int main(){
	StaticDemo s1,s2,s3,s4,s5;
	return 0;
}
