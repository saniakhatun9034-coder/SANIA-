#include <iostream>
using namespace std;
int main() {
    int n,sum,hundreds,tens,units;
    cout<<"Enter a 3-digit number: ";
    cin>>n;
    hundreds=n/100;    
    tens=(n/10)%10;    
    units=n%10;         
    sum=hundreds+tens+units;
    cout<<"Sum of digits: "<<sum<<endl;
}