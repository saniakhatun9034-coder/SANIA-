#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Input the first number: ";
    cin>>a;
    cout<<"Input the second number: ";
    cin>>b;
    int x=a,y=b;
    while(y!=0) {
        int r=x%y;
        x=y;
        y=r;
    }
    cout<<"The Greatest Common Divisor is: "<<x<<endl;
}