//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    int lo=0, hi=n-1;
	    while(lo<=hi){
	        int mid=(lo+hi)/2;
	        if(mid>0 and mid<n-1){
	            if(arr[mid]>arr[mid-1] and arr[mid]>=arr[mid+1]){
	                return arr[mid];
	            }else if(arr[mid]>=arr[mid+1]){
	                hi=mid-1;
	            }else{
	                lo=mid+1;
	            }
	        }else{
	            break;
	        }
	    }
	    return arr[n-1];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends