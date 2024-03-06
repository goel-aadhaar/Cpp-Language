#include<iostream>
using namespace std;
int power(int a,int b, int c){
    if (b==1)return a;
    int sum=0;
    sum=sum+a*power(a,b-1,c)%c;
    return sum;
}
int main(){
    int x,y,n;
    cin>>x>>y>>n;
    cout<<power(x,y,n);
}