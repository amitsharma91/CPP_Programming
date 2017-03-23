#include<iostream>
using namespace std;

int main(){
	const int DAY = 7,MAX = 10;
	
	char week[DAY][MAX] = {"Monday","Tuesday","Wednesday","Thirsday","Friday","Saturday","Sunday"};
	
	
	cout << "Days in a week are: "<< endl;
	
	for(int i=0;i<DAY;i++){
		cout << week[i]<<endl;
	}
	
	return 0;
}
