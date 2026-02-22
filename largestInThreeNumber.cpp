#include<iostream>
using namespace std;
int main(){
    int a = 23, b = 33, c = 5;
    if(a>b && a>c){
        cout<<"A is largest";
    }
    else if(b>a && b>c){
        cout<<"B is Largest";
    }
    else{
        cout<<"C is Largest";
    }
}
