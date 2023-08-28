//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        int ans[n]={0};
        for(int i=0;i<n;i++){
            ans[arr[i]]++;
        }
        vector<int> sol;
        for(int i=0;i<n;i++){
            if(ans[i]>1){
                sol.push_back(i);
            }
        }
        if(sol.size()==0){
            sol.push_back(-1);
        }
        return sol;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends