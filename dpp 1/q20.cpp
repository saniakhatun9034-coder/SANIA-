#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter three integer:";
cin>>a>>b>>c;
int result=a+b*c-(++b);
cout<<"value of expression a+b*c-(++b)is :"<<result;
}