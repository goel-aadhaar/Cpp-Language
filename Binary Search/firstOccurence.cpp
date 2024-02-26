#include<iostream>
using namespace std;

int main()
{
    int n;cin>>n;int arr[n];int x;cin>>x;
    for(int i=0;i<n;i++)cin>>arr[i];
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]>x) hi=mid-1;
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    cout<<lo;
    return 0;
}