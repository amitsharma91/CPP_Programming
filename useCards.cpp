#include<iostream>
using namespace std;
#include "Cards.h"

int main(){
	
	Cards temp,prize,choosen;

	Cards first(2,hearts);
	Cards second(14,diamond);
	Cards third(6,club);

	cout << "FIRST - ";first.display();	
	cout << "SECOND - ";second.display();
	cout << "THIRD - ";third.display();
	
	prize = second;
	
	cout << "PRIZE - ";prize.display();
	
	
	cout << "Enter the Shuffle Rounds: ";
	int n;cin >> n;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<3;j++){
			if(i!=j){
				temp = first;first = second;second = temp;
			}
		}
	}
	
	cout << "Select any Card (1|2|3): ";
	int cho;cin >> cho;
	
	switch(cho){
		
		case 1: if(prize.equals(first)){cout << "CONGRATULATIONS! You WON:-)" << endl;
						cout << "Your Selected -  ";first.display();
					}else{cout << "Sorry! Wrong Choice";}break;
		case 2: if(prize.equals(second)){cout << "CONGRATULATIONS! You WON:-)" << endl;
						cout << "Your Selected -  ";second.display();
					}else{cout << "Sorry! Wrong Choice";}break;
		case 3: if(prize.equals(third)){cout << "CONGRATULATIONS! You WON:-)" << endl;
						cout << "Your Selected -  ";third.display();
					}else{cout << "Sorry! Wrong Choice";}break;
	}	
		
	return 0;
}
