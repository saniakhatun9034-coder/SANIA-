#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value: ";
  cin>>n;
  long long factorial=1;
  for(int i=1;i<=n;i++){
    factorial=factorial*i;
  }
  cout<<"factorial of"<< n <<" is :"<<factorial<<endl;
  }
