#include <iostream>

using namespace std;

template <class T>

class calculator{
	private:
		T num1, num2;
	public:
		calculator(T n1, T n2){
			num1 = n1;
			num2 = n2;
		}
		
		void displayResult(){
			cout<<"Numbers are "<<num1<<" and "<<num2<<endl;
			cout<<"Addition is "<<add()<<"\n";
			cout<<"Substraction is "<<substract()<<"\n";			
		}
		
		T add(){
			return num1 + num2;
		}
		
		T substract(){
			return num1 - num2;
		}
};

int main(){
	calculator<int> calc(10, 5);
	cout<<"		Int result	"<<endl;
	calc.displayResult();
	
	calculator<float> calcfloat(10.5, 7.5);
	cout<<"		Float result	"<<endl;
	calcfloat.displayResult();
	return 0;
}
