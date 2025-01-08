#include<iostream>
using namespace std;

struct Rectangle{
    int length,breadth;
};

void initialise(struct Rectangle *r,int l,int b){
    r->length = l;
    r->breadth =b;
    
}
int perimeter(Rectangle r){
    return 2*(r.length*r.breadth);
}
int area(Rectangle r){
    return r.length*r.breadth;
}


int main(){
    Rectangle r= {0,0};
    int l,b;

    cout<<"Enter Length and Breadth :"<<endl;
    cin>>l>>b;
    initialise(&r,l,b);
    cout<<"Length is :"<<r.length<<endl<<"Breadth is :"<<r.breadth<<endl;

    cout<<"Area is :"<<area(r)<<endl<<"Perimeter is :"<<perimeter(r)<<endl;

}