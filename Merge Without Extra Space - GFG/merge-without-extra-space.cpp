//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    private:
    void swapNumber(long long arr1[], long long arr2[], int n, int m){
        if(arr1[n]>arr2[m]){
        swap(arr1[n], arr2[m]);
        }
    }
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int len=n+m;
            int gap=(len/2) + (len%2);
            while(gap>0){
                int left=0;
                int right=left+gap;
                while(right<len){
                    if(left<n && right>=n){
                        swapNumber(arr1, arr2, left, right-n );
                    }else if(left>=n){
                        swapNumber(arr2, arr2, left-n, right-n );
                    }else{
                        swapNumber(arr1, arr1, left, right);
                    }
                    left++;
                    right++;
                }
                if(gap==1) {
                    break;
                }
                gap=(gap/2) + (gap%2);
            }
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends