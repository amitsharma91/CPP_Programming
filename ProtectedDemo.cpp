#include<iostream>
using namespace std;

class ProtectedDemo{
    private: 
      int x;
    public:
      int y;
    protected: 
      int z;
};

class ProtectedDemoSub: ProtectedDemo{
   public:
   void show();
};

void ProtectedDemoSub::show(){
   //x = 10;
   y = 20;cout << y << endl;
   z = 30;cout << z << endl;
}

int main(){
   ProtectedDemoSub obj;
   
   obj.show();
   
	return 0;
}
