//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    if(n==1){
	        return m;
	    }
	    if(n==2){
	        return (sqrt(m)-(int)sqrt(m))==0? sqrt(m):-1;
	    }
	    int lo=1, hi=10, ans=INT_MIN;
	    while(lo<=hi){
	        int mid=lo+(hi-lo)/2;
	        long long int val=1;
	        for(int i=0;i<n;i++){
	            val=(long long int)(val*mid);
	        }
	        if(val==m){
	            return mid;
	        }else if(val>m){
	            hi=mid-1;
	        }else{
	            lo=mid+1;
	        }
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends