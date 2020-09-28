/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on December 5, 2019, 6:07 PM
 */
#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int firstDegree, secondDegree;
    
    cout<<"enter degree of the first polynomia P(x) "<<endl;
    cin>>firstDegree;
    
    int num1 = firstDegree+1;
    
    int poly1[num1];
    
    cout<<"enter the coeficient of the first polynomia P(x) "<<endl;
    for(int i=0; i<=firstDegree; i++){
        cin>>poly1[i];
    }
    
    //entering coeficients for second polynomia
    cout<<"enter degree of the second polynomia Q(x) "<<endl;
    cin>>secondDegree;
    
    int num2 = secondDegree+1;
    
    int poly2[num2];
    
    cout<<"enter the coeficient of the first polynomia P(x) "<<endl;
    for(int i=0; i<=secondDegree; i++){
        cin>>poly2[i];
    }
    
    int choice, end;
    //enter choice of arithmetic
    cout<<"int you want \n addition, enter 1 \n substraction, enter 2";
    cin>>choice;
    do{
        switch(choice){
            case 1:
                
                break;
        }
    }while(end!=-1);
            
            
    
    return 0;
}

