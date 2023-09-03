//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int ptr1=0, ptr2=0;
	    while(ptr2<n){
	        if(arr[ptr1]!=0 and ptr1==ptr2){
	            ptr1++;
	            ptr2++;
	        }else if(arr[ptr1]==0){
	            while(arr[ptr2]==0 and ptr2<n-1){
	                ptr2++;
	            }
	            swap(arr[ptr1], arr[ptr2]);
	            ptr1++;
	            ptr2++;
	        }
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
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends