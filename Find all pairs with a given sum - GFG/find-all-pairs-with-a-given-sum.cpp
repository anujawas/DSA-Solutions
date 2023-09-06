//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    bool binSearch(int arr[], int n, int k){
        //cout<<k<<" ";
        int lo=0,hi=n-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[mid]==k){
                return true;
            }
            else if(arr[mid]>k){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        return false;
    }
    vector<pair<int,int>> allPairs(int A[], int B[], int n, int M, int X)
    {
        vector<pair<int,int>> ans;
        sort(A,A+n);
        sort(B,B+M);
        for(int i=0;i<n;i++){
            if(binSearch(B,M,X-A[i])){
                pair<int,int> val(A[i],X-A[i]);
                ans.push_back(val);
                
            }
        }
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}
// } Driver Code Ends