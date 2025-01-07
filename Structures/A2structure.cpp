#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void area(Rectangle *r){
    r->length = 20;
    cout<<r->length<<" "<<r->breadth<<endl;
}

int main(){
    struct Rectangle r={10,5};
    area(&r);

    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

}