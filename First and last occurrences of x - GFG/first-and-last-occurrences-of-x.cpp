//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        int lo=0,hi=n-1;
        int ans=INT_MAX;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            //cout<<mid<<" "<<lo<<" "<<hi<<endl;
            if(arr[mid]==x){
                ans=min(ans,mid);
                //cout<<ans<<" "<<mid<<endl;
                hi=mid-1;
            }else if(arr[mid]>x){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        
        lo=0,hi=n-1;
        int ans1=INT_MIN;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[mid]==x){
                ans1=max(ans1,mid);
                lo=mid+1;
            }else if(arr[mid]>x){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        if(ans==INT_MAX) ans =-1;
        if(ans1==INT_MIN) ans1=-1;
        return {ans, ans1};
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends