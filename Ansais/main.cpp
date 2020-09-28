/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on April 27, 2020, 6:26 PM
 */
#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;
/*
 * 
 */
int a1, a2;
int main(int argc, char** argv) {
    int base;
    int decimalNum;
    do{
        cout<<"enter the base to which you want to convert your decimal number:  ";
        cin>>base;
        cout<<endl;
    }while(base<2 || base>9);
    
    do{
        cout<<"enter the decimal number:  ";
        cin>>decimalNum;
        cout<<endl;
    }while(decimalNum<=0 || decimalNum>(pow(base, 4) - 1));
    
    int i;
    a1 = decimalNum;
    int answer[4];
    for(i=0; i<4; i++){
        a1 = a1%base;
        answer[i] = a1;
        decimalNum = decimalNum/base;
        a1 = decimalNum;
    }
    
    int j;
    for(j = i-1; j>=0; j--){
        cout<<answer[j];
    }
    return 0;
}

