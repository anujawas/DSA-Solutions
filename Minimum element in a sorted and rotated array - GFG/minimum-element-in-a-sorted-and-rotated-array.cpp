//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        int lo=0,hi=n-1, ans=INT_MAX;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[lo]<=arr[hi]){
                ans=min(ans,arr[lo]);
                break;
            }
            if(arr[mid]>=arr[lo]){
                ans=min(ans,arr[lo]);
                lo=mid+1;
            }else{
                ans=min(ans,arr[mid]);
                hi=mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends