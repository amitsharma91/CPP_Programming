#include<iostream>
using namespace std;


int main(){
	int r1,r2,c1,c2;

	cout << "Enter the number of Rows-1: ";
	cin >> r1;
	
	cout << "Enter the number of Columns-1: ";
	cin >> c1;

	cout << "Enter the number of Rows-2: ";
	cin >> r2;

	cout << "Enter the number of Columns-2: ";
	cin >> c2;

	if(c1 == r2){
		int a[r1][c1],b[r2][c2],c[r1][c2],k;

		cout << "Enter First ARRAY of "<< (r1*c1) << " Elements: " << endl;
		for(int i=0;i< r1;i++){
			for(int j=0;j<c1;j++){
				cin >> a[i][j];
			}
		}
		
		cout << "Enter Second ARRAY of "<< (r2*c2) << " Elements: " << endl;
		for(int i=0;i< r2;i++){
			for(int j=0;j<c2;j++){
				cin >> b[i][j];
			}
		}

		//Multiplication Logic

		for(int i=0;i<r1;i++){
			for(int j=0;j<c2;j++){
				c[i][j] = 
			}
		}
		
	}else{
		cout << "Invalid Dimensions of Array.";
	}

	return 0;	
}
