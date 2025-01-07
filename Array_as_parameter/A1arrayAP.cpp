#include<iostream>
using namespace std;

// void fun(int A[],int n){
void fun(int *A,int n){

    for(int i=0;i<n;i++)
    cout<<A[i]<<endl;

}

int main(){
    int Arr[] ={10,20,30,40,50};
    int n = sizeof(Arr)/sizeof(int);
    fun(Arr,n);

    // for(int x:Arr)
    // cout<<x<<" ";


}