#include<iostream>
using namespace std;

class FriendFunctionDemo{
	int x;
	public:
	FriendFunctionDemo():x(0){}
	friend void folk(FriendFunctionDemo &ffd);
};

void folk(FriendFunctionDemo &ffd){
	cout << "Default Value of X: " << ffd.x << endl;
	ffd.x += 98;
	cout << "Changed Value of X: " << ffd.x << endl;
}

int main(){
	FriendFunctionDemo f;

	folk(f);	
	
	return 0;
}
