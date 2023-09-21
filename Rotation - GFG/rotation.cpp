//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int lo=0,hi=n-1, ans=INT_MAX,ind=0;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[lo]<=arr[hi]){
                if(ans>=arr[lo]){
                    ans=arr[lo];
                    ind=lo;
                }
                //break;
            }
            if(arr[mid]>=arr[lo]){
                if(ans>=arr[lo]){
                    ans=arr[lo];
                    ind=lo;
                }
                lo=mid+1;
            }else{
                ans=min(ans,arr[mid]);
                if(ans>=arr[mid]){
                    ans=arr[mid];
                    ind=mid;
                }
                hi=mid-1;
            }
        }
        return ind;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends