#include<iostream>
using namespace std;
int main(){
  int a,r,n;
  cout<<"Enter a,r and n : ";
  cin>>a>>r>>n;
  int term=a;
  for(int i=0;i<n;i++){
    cout<<term<<endl;
    term=term*r;
  }
}