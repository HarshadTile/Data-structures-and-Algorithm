#include<iostream>
using namespace std;

int swap(int &x , int &y){
    int temp = x;
    x=y;
    y=temp;
}
int main()
{
    int a = 10 ,b=30 ;
    swap(a,b);
    cout<<a<<endl<<b;
    

}