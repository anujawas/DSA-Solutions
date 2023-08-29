//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    int sol[100000]={0};
	    
	    for(int i=0;i<n;i++){
	        sol[arr[i]]++;
	    }
	    int ptr1=0, ptr2=x;
	    while(ptr1<=ptr2){
	        //cout<<ptr1<<" "<<ptr2<<" "<<sol[ptr1]<<" "<<sol[ptr2]<<endl;
	        if(x-ptr1==ptr1 or x-ptr2==ptr2){
	            if(sol[ptr1]>=2 or sol[ptr2]>=2){
	                return true;
	            }
	        }
	        else if(sol[ptr1] and sol[ptr2] and ptr1+ptr2==x){
	            return true;
	        }
	        ptr1++;
	        ptr2--;
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