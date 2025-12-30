#include <iostream>
using namespace std;
int main(){
    int year,lastTwo;
    cout<<"Enter a 4-digit year: ";
    cin>>year;
    lastTwo=year%100;
    cout<<"Last two digits: "<<lastTwo<<endl;
}