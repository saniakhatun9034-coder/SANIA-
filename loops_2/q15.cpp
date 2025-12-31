#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value : ";
    cin>>n;
    for(int i=1;i<=n;i++) {
        int cube=i*i*i;
        cout<<"Number is: "<<i<<"and the cube of"<<i<<"is: "<<cube << endl;
    }
}