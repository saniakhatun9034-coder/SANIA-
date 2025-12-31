#include <iostream>
using namespace std;
int main() {
    int n;
    cout <<"Enter the value: ";
    cin>>n;
    for(int i=1;i<=n;i++) {
        long long factorial=1; 
        for(int j=1; j<=i; j++) {
            factorial=factorial*j;
        }
        cout<<"Factorial of "<< i <<"is: "<<factorial<<endl;
    }
}