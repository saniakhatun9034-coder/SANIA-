#include <iostream>
using namespace std;
int main() {
    int h1,m1,h2,m2;
    int totalMin;
    cout<<"Enter first time : ";
    cin>>h1>>m1;
    cout<<"Enter second time : ";
    cin>>h2>>m2;
    totalMin=(h1 * 60 + m1)+(h2 * 60 + m2);
    cout<<"Total minutes: "<<totalMin<<endl;
}