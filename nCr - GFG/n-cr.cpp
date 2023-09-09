//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#define ll long long int
class Solution{
public:

    long long int nCr(int n, int r){
        if(r>n) return 0;
        if(r==0 or r==n) return 1;
        n++;
        vector <vector<ll>> ans;
        for (int i = 1; i <= n; i++){
            vector<ll> temp;
            if (i==1){
                temp.push_back(1);
            }
            else{
                temp.push_back(1);
                for (int j=1; j<=i-2; j++){
                    ll val = (ans[ans.size()-1][j-1]+ans[ans.size()-1][j])%1000000007;
                    temp.push_back(val);
                }
                temp.push_back(1);
            }
            ans.push_back(temp);
        }
        return ans[n-1][r];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends