#include<iostream>
using namespace std;

int add(int a, int b,int c){
    int d;
    d=a+b+c;
    return d;
}

int main()
{
    int num1 = 10,num2=20,num3=30;
    int sum;
    sum=add(num1,num2,num3);
    cout<<"sum is: "<<sum;
    return 0;
}