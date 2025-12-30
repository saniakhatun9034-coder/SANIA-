#include <iostream>
using namespace std;
int main() {
    int totalSec,hours,minutes,seconds;
    cout<<"Enter total seconds: ";
    cin>>totalSec;
    hours=totalSec/3600;              
    minutes=(totalSec%3600)/60;   
    seconds=totalSec%60;             
    cout<<"Hours: "<<hours<<endl;
    cout<<"Minutes: "<<minutes<<endl;
    cout<<"Seconds: "<<seconds<<endl;
}