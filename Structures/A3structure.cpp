#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

struct Rectangle *fun(){
    struct Rectangle *p;
    p = new Rectangle;

    p->length=20;
    p->breadth=30;
    return p;
}

int main(){
    struct Rectangle *ptr = fun();

    cout<<"Length is "<<ptr->length<<" breadth is "<<ptr->breadth;
}