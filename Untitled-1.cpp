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
#include <cstdlib>

using namespace std;
/*
 * 
 */
int a1, a2;
int main(int argc, char** argv) {
    int base = 0;
    int decimalNum = 0;
    do{
        cout<<"enter the base to which you want to convert your decimal number:  ";
        cin>>base;
        cout<<endl;
    }while(base<2 && base>9);
    
    do{
        cout<<"enter the decimal number:  ";
        cin>>decimalNum;
        cout<<endl;
    }while(decimalNum<=0 && decimalNum>=((base^3)-1));
    
    
    /*(base^3)-1*/
    return 0;
}

