//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool doesExist(int arr[], int n, int target){
	    if(n==1){
	        return arr[0]==target;
	    }
	    int lo=0,hi=n-1;
	    while(lo<=hi){
	        int mid=(lo+hi)/2;
	        if(arr[mid]==target){
	            return true;
	        }else if(arr[mid]>target){
	            hi=mid-1;
	        }else{
	            lo=mid+1;
	        }
	    }
	    return false;
	}
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	        if(x-arr[i]!=arr[i] and doesExist(arr,n,x-arr[i])){
	            return true;
	        }else if(x-arr[i]==arr[i] and i!=n-1){
	            return arr[i]==arr[i+1];
	        }
	    }
	    return false;
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
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends