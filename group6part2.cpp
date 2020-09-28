#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

float capacitance = 0.0000006;
float inductance = 0.5;
float resistance = 225.0;
int i = 0;
int count = 0;
//initial w0 and w1
float w0 = 1.0, w1 = 1000.0;

float getwr(float, float);
float getComputeForWr(float);
float getFunctionForWr(float);
float getRSquare();
float getLandC(float);
float errorPercentage(float, float);

main(){
	float wr, w2;
	
	do{
		count++;
		wr = getwr(w0, w1);
		w2 = errorPercentage(w0, w1);
		if((getComputeForWr(wr)*getFunctionForWr(w0))<0){
			cout<<(getComputeForWr(wr)*getFunctionForWr(w0))<<endl;
			cout<<"The value of impedance is: "<<(int)getComputeForWr(wr)<<" and wr is "<<wr<<endl;
			cout<<"The erroe estimate es is: "<<w2<<endl;
			cout<<count<<endl;
			cout<<wr<<"  "<<w0<<"\n\n"<<endl;
			w1 = wr;
		}
		else if((getComputeForWr(wr)*getFunctionForWr(w0))>0){						
			cout<<(getComputeForWr(wr)*getFunctionForWr(w0))<<endl;	
			cout<<"The value of impedance is: "<<(int)getComputeForWr(wr)<<" and wr is "<<wr<<endl;
			cout<<"The erroe estimate es is: "<<w2<<endl;	
			cout<<count<<endl;
			cout<<wr<<"  "<<w1<<"\n\n"<<endl;	
			w0 = wr;
		}	
		else{
			cout<<(getComputeForWr(wr)*getFunctionForWr(w0))<<endl;	
			cout<<"The value of impedance is: "<<getComputeForWr(wr)<<" and wr is "<<wr<<endl;
			cout<<"The erroe estimate es is: "<<w2<<endl;
			cout<<count<<endl;
			i=20;
		}
		int allen = (int)getComputeForWr(wr);
	}while(i<20);
	
}

float errorPercentage(float x, float y){
	return sqrt(pow(((x-y)/(x+y)),2));//*100;
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



