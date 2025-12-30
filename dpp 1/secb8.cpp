#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    cout<<"Next character: "<<char(ch + 1)<<endl;
    cout<<"Next to next character: "<<char(ch + 2)<<endl;
}