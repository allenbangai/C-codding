/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package deccbuea;

/**
 *
 * @author DELL
 */
public class CompareNumber {

    public static String Programmner(double d, double d0, double d1) {
        double max = 0.0, min = 0.0, answer;
        
        if(d >= d0 && d >= d1){
            max = d;
        }else if(d0 >= d1 && d0 >= d){
            max = d0;
        }else{
            max = d1;
        }
        
        if(d <= d0 && d <= d1){
            min = d;
        }else if(d0 <= d1 && d0 <= d){
            min = d0;
        }else{
            min = d1;
        }
        
        answer = max - min;
        return String.valueOf(answer);
    }
}
