#include <iostream>
using namespace std;
int main(){
    int start,end,count=0;
    cout<<"Start number: ";
    cin>>start;
    cout<<"End number: ";
    cin>>end;
    for(int n=start;n<=end;n++) {
        if (n<=1)
            continue;
        int prime=1;
        for (int i=2;i<n;i++) {
            if (n%i==0) {
                prime=0;
                break;
            }
        }
        if(prime==1) {
            cout<<n<<endl;
            count++;
        }
    }
    cout<<"Total primes: "<<count;
}
