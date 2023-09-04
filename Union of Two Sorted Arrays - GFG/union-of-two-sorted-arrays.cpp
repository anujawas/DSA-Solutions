//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> ans;
        int ptr1=0;
        int ptr2=0;
        while(ptr1<n and ptr2<m){
            if(arr1[ptr1]>=arr2[ptr2]){
                if(ans.size()!=0){
                    if(ans[ans.size()-1]!=arr2[ptr2]){
                        ans.push_back(arr2[ptr2]);
                    }
                }else{
                    ans.push_back(arr2[ptr2]);
                }
                ptr2++;
            }else{
                if(ans.size()!=0){
                    if(ans[ans.size()-1]!=arr1[ptr1]){
                        ans.push_back(arr1[ptr1]);
                    }
                }else{
                    ans.push_back(arr1[ptr1]);
                }
                ptr1++;
            }
        }
        while(ptr2!=m){
            if(ans.size()!=0 and ans[ans.size()-1]!=arr2[ptr2]){
                ans.push_back(arr2[ptr2]);
            }
            ptr2++;
        }
        while(ptr1!=n){
            if(ans.size()!=0 and ans[ans.size()-1]!=arr1[ptr1]){
                ans.push_back(arr1[ptr1]);
            }
            ptr1++;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends