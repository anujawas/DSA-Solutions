//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    int dum[n]={0};
	    int ptr=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            dum[ptr]=arr[i];
	            ptr++;
	        }
	    }
	    int ptr2=ptr;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            dum[ptr2]=arr[i];
	            ptr2++;
	        }
	    }
	    int i=0, j=ptr;
	    ptr2=0;
	    while(ptr2<n and i<ptr and j<n){
	        if(ptr2&1){
	            arr[ptr2]=dum[j];
	            j++;
	        }else{
	            arr[ptr2]=dum[i];
	            i++;
	        }
	        ptr2++;
	    }
	    while(i<ptr){
	        arr[ptr2]=dum[i];
	        i++;
	        ptr2++;
	    }
	    while(j<n){
	        arr[ptr2]=dum[j];
	        j++;
	        ptr2++;
	    }
	    
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
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends