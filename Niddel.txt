/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kamadje Allen
 *
 * Created on 18 novembre 2019, 02:28
 */

#include <cstdlib>
#include <iostream>

using namespace std;
/*
 * 
 */

//Global Array variable to store 3X3 matrix...
int matrix3X3[3][3];
//funcion to input 3x3 matrix
void inputMatrix();
//function to calculate the determinant of 3x3 matrix
void calculateDeterminant();
//function to display matrix
void displayMatrix();

int main(int argc, char** argv) {
    inputMatrix();
    
    //the value of the determinant of 3X3 matrix is
    cout<<"\n the value of the determinant of 3X3 matrix is \n";
    displayMatrix();
    //
    calculateDeterminant();
    return 0;
}

//function to calculate determinant
void calculateDeterminant(){
    int determinant;
    //module one
    int moduleOne = matrix3X3[1][1]*(matrix3X3[2][2]*matrix3X3[3][3] - matrix3X3[2][3]*matrix3X3[3][2]);
    //module two
    int moduleTwo = matrix3X3[1][2]*(matrix3X3[2][1]*matrix3X3[3][3] - matrix3X3[2][3]*matrix3X3[3][1]);
    //module three
    int moduleThree = matrix3X3[1][3]*(matrix3X3[2][1]*matrix3X3[3][2] - matrix3X3[2][2]*matrix3X3[3][1]);
    
    //calculate determinant by (+ - + ) orinciple
    determinant = moduleOne - moduleTwo + moduleThree;
    cout<<"\n   "<<determinant;
}

//function to inplut and store array matrix
void inputMatrix(){
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            cin>>matrix3X3[i][j];
            if(j==3){
                cout<<"\n";
            }
        }
    }
}

//function to display matrix
void displayMatrix(){
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            cout<<matrix3X3[i][j]<<"  ";
            if(j==3){
                cout<<"\n";
            }
        }
    }
}