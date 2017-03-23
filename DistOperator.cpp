#include<iostream>
using namespace std;

class DistOperator{
	float feet,inch;
	public:
	DistOperator(): feet(0.0),inch(0.0){}
	DistOperator(float f,float i):feet(f),inch(i){}

	DistOperator operator + (DistOperator d2){
		float ff = 0.0;
		float t = inch + d2.inch;
		while(t >= 12){
			t -=12;
			ff++;
		}
		ff += feet + d2.feet;
		float ii = t;
		
		return DistOperator(ff,ii);
	}

	void show(){
		cout << "Feet: " << feet << endl;
		cout << "Inch: " << inch << endl;	
	}
};

int main(){
	DistOperator d1(5.0,16.0),d2(4.0,18.0),d3;

	d3 = d1 + d2;
	d3.show();
	
	DistOperator d4 = d1 + d2 + d3;
	d4.show();	
	
	return 0;
}
