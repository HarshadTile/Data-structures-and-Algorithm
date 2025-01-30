#include<stdio.h>

int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-2)+fib(n-1);
}
int main(){
    int res = fib(7);
    printf("%d",res);
    return 0;
}