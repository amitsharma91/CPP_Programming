#include<iostream>
using namespace std;

int main(){
	int days_year[] = {31,29,31,30,31,30,31,31,30,31,30,31};
	
	
	cout << "Enter the Day of Year Below: ";
	cout << "\nmonth: ";int month;cin >> month;
	cout << "\nDay of Month: ";int day;cin >> day;
	
	int total=day;
	
	for(int i=0;i<month-1;i++){
		total += days_year[i];
	}
	
	cout <<endl << "Total Days count is: " << total;
	
	return 0;
}
