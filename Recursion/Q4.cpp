#include<iostream>
using namespace std;
int a =1;
int b=1;
void fibo(int x){
    cout<<a;
    cout<<b;
    fibo(a+b);
}
int main(){
    int n;
    cin>>n;
    fibo(n);
    return 0;
}