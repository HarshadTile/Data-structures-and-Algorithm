#include<stdio.h>
#include<iostream>
using namespace std;

double e(int x,int n){
    static int  p = 1,f = 1;
    double r;

    if(n==0){
        return 1;
    }

    r = e(x,n-1);
    p = p*x;
    f = f*n;
    return r+p/f;

}
int main(){
    // cout<<e(4,15)<<endl;
    printf("%lf \n",e(4,15));
}