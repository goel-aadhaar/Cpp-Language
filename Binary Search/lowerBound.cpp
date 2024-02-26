#include<iostream>
using namespace std;

int main()
{
    int n;cin>>n;int arr[n];int num;cin>>num;
    for(int i=0;i<n;i++)cin>>arr[i];
    int lo=0,hi=n-1;
    int mid;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if(arr[mid]==num){cout<<arr[mid-1];return 0;}
        else if(arr[mid]>num)hi=mid-1;
        else if(arr[mid]<num){
            if(arr[mid+1]>num) {cout<<arr[mid];return 0;}
            else lo=mid+1;
        }
    }
    return 0;
}