#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter First Number:";
    cin>>a;
    cout<<"Enter Second Number:";
    cin>>b;
    cout<<"Before Swapping:"<<endl;
    cout<<a<<" "<<b<<endl;
    a = a - b;
    b = a + b;
    a = b - a;
    cout<<"After Swapping:"<<endl;
    cout<<a<<" "<<b<<endl;
}
