//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
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
        if(ans==INT_MAX){ 
            return 0;
        }
        
        return ans1-ans+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends