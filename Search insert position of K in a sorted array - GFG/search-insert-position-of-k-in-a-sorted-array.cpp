//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>arr, int n, int x)
    {
        long long lo=0,hi=n;
        long long ans=-1;
        if(arr[hi-1]<x){
            return hi;
        }
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(arr[mid]==x){
                return mid;
            }else if(arr[mid]<x){
                ans=max(ans,mid);
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        return ans+1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends