#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++) {
        sum=sum+i;
    }
    cout<<"Sum of first " <<n<<" natural numbers is: "<<sum<<endl;
}