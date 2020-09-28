#include <iostream>
/*
Abstract Class
*/
using namespace std;
class one{
    public:
        virtual show()= 0;
};

class two: public one{
	public:
		int show(){
			cout<<"abstracy class";
			return 0;
		}
};

int main(){
    two object;
    one *b;
    b = &object;
    b->show();
}
