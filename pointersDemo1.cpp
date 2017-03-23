#include<iostream>
using namespace std;

/*
void calc(double& dd){
	//cout << "Value of var caught is: " << dd;	
	dd = dd * 25.4;
}*/

void calc(double* ptr){
	*ptr *=25.4;
}

int main(){
	
	double d;

	cout << "Enter value in Inches: ";
	cin >> d;
	
	calc(&d);
		
	cout << "Conversion to centimeters is: " << d; 

	/*
	double d;
	
	cout << "Enter value in Inches: ";
	cin >> d;
	
	calc(d);

	cout << "Conversion to centimeters is: " << d; 
	*/	

	
	/*
	int arr[] = {654,65,4,6,9,85,2,5,524,552};
	char ar[] = {'a','m','i','t'};

	int * ptri;
	char * ptrc;
		
	ptri = arr;
	ptrc = ar;


	for(int i=0;i<10;i++){
		//cout << *(arr+i) << endl;
		cout << *(ptri++) << endl;
	}	
	cout << "******************************" << endl;
	for(int i=0;i<4;i++){
		//cout << *(ar+i) << endl;
		cout << *(ptrc++) << endl;
	}
	*/




	/*	
	int x = 10;
	int * ptr;
	ptr = &x;

	cout << "Value of x is: " << *(&x);
	*/

	/*	
	int a=10;float b=12.65;

	int *intp;
	float *floatp;
	void *voidp;

	cout << a << endl;
	cout << b << endl;
	
	intp = &a;
	floatp = &b;
		
	cout << intp << endl; 
	cout << floatp << endl;

	voidp = &a;
	cout << "Void pointer value: " << voidp << endl;
	cout << "void pointer pointing variable: " << *(reinterpret_cast<int*>(voidp)) << endl;
	
	voidp = &b;
	cout << "Void Pointer value: " << voidp << endl;
	cout << "void pointer pointing variable: " << *(reinterpret_cast<float*>(voidp)) << endl;
*/




	/*
	int i=1;
	int * ptr;
	ptr = &i;
	
	cout << "Value of ptr: " << * ptr << endl; 

	while(i<=10){
		cout << (* ptr)++ << "\t";
	}*/

	/*int x = 153;	
	int * intp;	
	intp = &x;
	cout << "Value of X: "<< x << endl;
	cout << "Value of Pointer: " << intp << endl;
	*intp +=2;
	cout << "Value of x: " << x;
	*/	
	
	
	return 0;
}
