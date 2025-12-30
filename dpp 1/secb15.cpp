#include <iostream>
using namespace std;
int main(){
    int n,lastDigit,remainder;
    cout<<"Enter any number: ";
    cin>>n;
    lastDigit=n%10;      
    remainder=lastDigit % 2; 
    cout<<"Last digit: "<<lastDigit<<endl;
    cout<<"Remainder when last digit is divided by 2: "<<remainder<<endl;
}