#include<iostream>
using namespace std;

    int digit(int x){
        if(x<0){
            x=-x;
        }
        if(x==0){
            return 0;
        }
        int sum=0;
        sum=sum+x%10;

        return sum+digit(x/10);
    }
    int main(){
        int n;
        cin>>n;
        cout<<digit(n)<<endl;
    
    return 0;
    }