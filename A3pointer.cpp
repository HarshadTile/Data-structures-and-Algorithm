#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main(){
    int *p;
    p = new int[5];
    p[0]=10; 
    p[1]=20; 
    p[2]=40; 
    p[3]=40;
    p[4]=50;

    for(int i = 0; i<5 ;i++)
        cout << p[i] << endl ;
        
    delete[ ] p;
    return 0;
    
}