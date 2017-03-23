#include<iostream>
using namespace std;

class Enemy{
	public:
		virtual void attack(){
			cout << "Enemy ATTACKS well..." << endl;
		}
};

class Ninja: public Enemy{
	public:
	void attack(){ cout << "Only Ninja Attacks Well..." << endl;}
};

class Monster: public Enemy{
	public: 
	void attack(){ cout << "Only Monster Attacks Well..." << endl;}
};

int main(){
	Ninja n;
	Monster m;
	
	n.attack();
	m.attack();
	return 0;
}
