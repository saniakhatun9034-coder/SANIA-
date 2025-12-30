#include <iostream>
using namespace std;
int main(){
    int totalSeconds,minutes,seconds;
    cout<<"Enter total seconds: ";
    cin>>totalSeconds;
    minutes=totalSeconds/60;  
    seconds=totalSeconds%60;  
    cout<<"Minutes:"<<minutes<<endl;
    cout<<"Seconds:"<<seconds<<endl;
}