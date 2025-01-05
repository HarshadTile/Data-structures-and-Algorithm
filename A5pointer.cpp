#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std ;

struct Rectangle
{
    int length ;
    int breadth;
};

int main(){
    struct Rectangle r;
    struct Rectangle *p;

    // r.length = 20;
    // r.breadth = 40;

    // cout << r.length << endl;
    // cout << r.breadth << endl;

    (*p).length = 40;
    (*p).breadth = 50;

    cout << "Using Pointer" << endl;

    return 0;
}
