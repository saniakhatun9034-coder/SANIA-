#include <iostream>
using namespace std;
int main(){
    float totalAmount, discountPercent, discount, finalAmount;
    cout<<"Enter total amount: ";
    cin>>totalAmount;
    cout<<"Enter discount percentage: ";
    cin>>discountPercent;
    discount=(totalAmount*discountPercent)/100;
    finalAmount=totalAmount-discount;
    cout<<"Discount amount: "<<discount<<endl;
    cout<<"Final amount after discount: " <<finalAmount<<endl;
}