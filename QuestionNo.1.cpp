// CU Coding-Test 01
// Question No. 1

// Name: Arvind Sharma
// Group No: G8
// Roll no. 2010990125


#include <bits/stdc++.h>
using namespace std;

int main()
{
    // driver program
    int n;
    cout<<"Array Length: ";
    cin>>n;
    int arr[n];
    cout<<"Array Input: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}
