#include <iostream>
using namespace std;
int main(){
    int amount,notes,remaining;
    cout<<"Enter amount in rupees: ";
    cin>>amount;
    notes=amount/100; 
    remaining=amount%100; 
    cout<<"100-rupee notes: "<<notes<<endl;
    cout<<"Remaining amount: "<<remaining<<endl;
}