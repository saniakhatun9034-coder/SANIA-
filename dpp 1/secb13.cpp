#include <iostream>
using namespace std;
int main(){
    float num;
    int intPart;
    float fracPart;
    cout<<"Enter a floating number: ";
    cin>>num;
    intPart=(int)num;    
    fracPart=num-intPart; 
    cout<<"Fractional part: "<<fracPart<<endl;
}