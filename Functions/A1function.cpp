 #include<iostream>
 using namespace std;

int add(int a,int b)
 {
    int res;
    res = a+b;
    return (res);

 }
  int main()
 {
    int num1=10, num2=30 , sum;
    sum = add(num1,num2);
    cout<<"Sum is :"<<sum;
    return 0;
    

 }