//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int KthMissingElement(int a[], int n, int k);


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << KthMissingElement(a, n, k) << endl;
    
    }
    return 0;
}

// } Driver Code Ends


int KthMissingElement(int arr[], int n, int k)
{
    int val=arr[0]+k-1;
    for(int i=0;i<n;i++){
        if(arr[i]<=val){
            val++;
        }
        else{
            break;
        }
    }
    return val>arr[n-1]?-1:val;
}