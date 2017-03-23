#include<iostream>
using namespace std;

class CounterObjectsOperatorOverloading{
	unsigned int count;
	public:
	CounterObjectsOperatorOverloading():count(0){}

	CounterObjectsOperatorOverloading(int x):count(x){}
	
	int get_count(){return count;}

	CounterObjectsOperatorOverloading operator ++ (){
		return CounterObjectsOperatorOverloading(count++);
	}
};


int main(){
	CounterObjectsOperatorOverloading c1,c2;
	
	cout << "c1: " << c1.get_count() << endl;
	cout << "c2: " << c2.get_count() << endl;
	
	++c1;++c2,++c2;
	
	c1 = ++c2;	

	cout << "c1: " << c1.get_count() << endl;
	cout << "c2: " << c2.get_count() << endl;
	return 0;
}
