#include <iostream>
using namespace std;
int main() {
    int n,tens,units,rev;
    cout <<"Enter a 2-digit number: ";
    cin>>n;
    tens=n/10;  
    units=n%10;   
    rev=units*10+tens;
    cout<<"Reversed number: "<<rev<<endl;
}