#include <iostream>
/**

Abstract class implemetation

**/

using namespace std;

class L{
	public:
		virtual char letter() = 0;
		virtual int number() = 0;
};

class A : public L{
	public:
		char letter(){
			return 'A';
		}
		
		int number(){
			return 1;
		}	
};

class B : public L{
	public:
		int number(){
			return 2;
		}
		char letter(){
			return 'B';
		}
	
};

int main(){
	A a;
	B b;
	cout<<"Letter (from a.letter()): "<<a.number()<<"\n";
	cout<<"Letter (from b.letter()): "<<b.number()<<"\n\n";
	
	L *lp;
	lp = &a;
	cout<<"lp (&a): "<<lp->letter()<<"\n\n";
	
	lp = &b;
	cout<<"lp (&b): "<<lp->letter()<<"\n";
	cout<<"lp->number: "<<lp->number()<<"\n";	
	
	return 0;
}
