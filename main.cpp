/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: medhat
 *
 * Created on 9. Mai 2018, 21:11
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */

void func1();
int main(int argc, char** argv) {
    
    int x;
    
    cout<<"Run = "<<x<<endl;
    func1();
    return 0;
}

void func1(){
    int x=10;
    cout<<"Run = "<<x<<endl;

}