#include<iostream>
using namespace std;

class Rectangle{
    public:
    int length,breadth;


void initialise(int l,int b){
    length = l;
    breadth =b;
    
}
int perimeter(){
    return 2*(length*breadth);
}
int area(){
    return length*breadth;
}

};
int main(){
    Rectangle r;
    int l,b;

    cout<<"Enter Length and Breadth :"<<endl;
    cin>>l>>b;
    r.initialise(l,b);
    cout<<"Length is :"<<r.length<<endl<<"Breadth is :"<<r.breadth<<endl;

    cout<<"Area is :"<<r.area()<<endl<<"Perimeter is :"<<r.perimeter()<<endl;

}