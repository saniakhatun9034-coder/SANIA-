#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    int a=0, b=1;
    if(n>=1) cout<<a<<endl;
    if(n>=2) cout<<b<<endl;
    for(int i=3; i<=n; i++) {
        int next= a+b;
        cout <<next<<endl;
        a=b;
        b=next;
    }
    cout<<endl;
}