#include<iostream>
using namespace std;

class ReturnObjects{
	float feet,inch;
	
	public:
	ReturnObjects(): feet(0.0),inch(0.0){}

	ReturnObjects(float f,float inc): feet(f),inch(inc){}

	ReturnObjects add(ReturnObjects);

	void display(){
		cout << "Feet: " << feet << endl << "Inches: " << inch << endl;
	}
};

ReturnObjects ReturnObjects::add(ReturnObjects r2){
	ReturnObjects ans;

	float temp = inch + r2.inch;;
	while(temp >= 12){
		temp-=12;		
		ans.feet++;
	}

	ans.feet += (feet + r2.feet);
	ans.inch = temp;

	return ans;
}

int main(){
	ReturnObjects r1(6.0,15);
	ReturnObjects r2(5.0,18);
	
	ReturnObjects r3 = r1.add(r2);
	r3.display();
	return 0;	
}
