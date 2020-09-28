#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float capacitance = 0.0000006;
float inductance = 0.5;
float resistance = 225.0;
int i = 0;
//initial w0 and w1
float w0 = 1.0, w1 = 1000.0;

float getwr(float, float);
float getComputeForWr(float);
float getFunctionForWr(float);
float getRSquare();
float getLandC(float);

main(){
	float wr, w2;
	wr = getwr(w0, w1);
	cout<<wr<<endl;
	w2 = w0;
	
	do{
		if((getComputeForWr(wr)*getFunctionForWr(w2))<0){
			cout<<(getComputeForWr(wr)*getFunctionForWr(w2))<<endl;
			cout<<wr<<"  "<<w2<<endl;
		}
		else{
			if(i==0){
				w2 = w1;
			}
			else{
				
			}				
			cout<<(getComputeForWr(wr)*getFunctionForWr(w2))<<endl;	
			cout<<wr<<"  "<<w2<<endl;	
		}	
		cout<<"The value of impedance is: "<<(int)getComputeForWr(wr)<<" and wr is "<<wr<<endl;	
		int allen = (int)getComputeForWr(wr);
		int w3 = wr;
		wr = getwr(wr, w2);
		cout<<wr<<"  "<<w2<<"\n\n"<<endl;
		w2=w3;
	}while(i++<10);
	
}

float getwr(float first, float second){
	return ((first+second)/2);
}

float getComputeForWr(float wr){	
	float impedance = getRSquare() + getLandC(wr);
	
	return ((1/sqrt(impedance))-75);
}

float getFunctionForWr(float w){
	float impedance = getRSquare() + getLandC(w);;
	
	return ((1/sqrt(impedance))-75);
}

float getRSquare(){
	return (1/(resistance*resistance));
}

float getLandC(float w){
	float add ((w*capacitance)-(1/(w*inductance)));
	return pow(add, 2);
}



