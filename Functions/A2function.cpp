#include<iostream>
using namespace std;

int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y = temp;
    
}

int  main(){
    int a,b,sum;
    a=20;
    b=30;
    swap(&a,&b);
    cout<<a<<endl<<b<<endl;

}






