#include <iostream>
using namespace std;
int main() {
    char ch1,ch2;
    int diff;
    cout<<"Enter first character: ";
    cin>>ch1;
    cout<<"Enter second character: ";
    cin>>ch2;
    diff=ch1 - ch2; 
    cout<<"ASCII difference: "<<diff<<endl;
}