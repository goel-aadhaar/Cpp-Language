#include<iostream>
using namespace std;

int main()
{
    int n;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid)lo=mid+1;
        else if(arr[mid]>mid){
            if(arr[mid-1]==(mid-1)){cout<<arr[mid-1]+1<<endl;return 0;}
            else hi=mid-1;
        }
    }
    return 0;
}