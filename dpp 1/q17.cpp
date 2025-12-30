#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter two numbers :";
cin>>a>>b;
int multiplymod = (a*b)%10;
int summod=(a+b)%5;
cout<<"(a*b)%10= "<<multiplymod<<endl;
cout<<"(a+b)%5= "<<summod<<endl;
}