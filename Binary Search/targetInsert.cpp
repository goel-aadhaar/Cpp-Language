#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int target,ans;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(target==arr[mid]){
            ans=mid;
            return 0;
        }
        if(target>arr[mid]){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    ans=lo;
    cout<<lo<<" "<<hi;
    return 0;
}