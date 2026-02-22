#include<iostream>
using namespace std;
int main(){
    int a, factorial = 1;
    cout<<"Enter First Number:";
    cin>>a;
    for(int i = 1; i <= a; i++){
        factorial *= i;
    }
    cout<<factorial;
    
}
