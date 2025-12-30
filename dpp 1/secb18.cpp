#include <iostream>
using namespace std;
int main(){
    double num;
    int intPart;
    double decimalPart;
    cout<<"Enter a double number: ";
    cin>>num;
    intPart=(int)num;         
    decimalPart=num-intPart;    
    cout<<"Integer part: "<<intPart<<endl;
    cout<<"Decimal part: "<<decimalPart<<endl;
    cout<<"Integer + Decimal part: "<<(intPart + decimalPart)<<endl;
}