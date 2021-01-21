#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    sort(arr, arr + n);
    
    if(arr[n-1]>k)
    cout<<abs(arr[n-1]-k)<<endl;
    else
    cout<<"0"<<endl;
    
}