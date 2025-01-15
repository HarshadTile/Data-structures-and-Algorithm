#include<stdio.h>
#include<iostream>
using namespace std;

int x =0;
int fun(int n){
   
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
}
int main(){
    int a = 5;
    int ans = fun(a);
    cout<<ans<<endl;

   
    int ans2 = fun(a);
    cout<<ans2<<endl;
    return 0;
}