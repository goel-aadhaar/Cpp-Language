// #include<iostream>
// using namespace std;
// int num(int x){
//     if(x==0 || x==1){
//         cout<<1;
//         return 1;
//     }
//     cout<<x<<" ";
//     return num(x-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     num(n);
//     return 0;
// }


#include<iostream>
using namespace std;
int num(int n,int x){
    // if(x==0 || x==1){
    //     cout<<1;
    //     return 1;
    // }
    // cout<<x<<" ";
    if(n==x){
        
        return x;
    }
    cout<<n<<" ";
    return num(n+1,x);
}
int main(){
    int n;
    cin>>n;
    cout<<num(1,n)<<" ";
    return 0;
}