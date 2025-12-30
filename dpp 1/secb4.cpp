#include <iostream>
using namespace std;
int main() {
    int totalMin,hours,minutes;
    cout<<"Enter total minutes: ";
    cin>>totalMin;
    hours=totalMin/60;  
    minutes=totalMin%60;  
    cout<<"Hours: "<<hours<<endl;
    cout<<"Minutes: "<<minutes<<endl;
}