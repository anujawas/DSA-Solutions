//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool isPossible(vector<int> arr, int k,int dis){
        int lastCow=arr[0];
        k--;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-lastCow>=dis){
                lastCow=arr[i];
                k--;
            }
            
            if(k==0){
                return true;
            }
        }
        return false;
    }
    int solve(int n, int k, vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int lo=1, hi=arr[n-1]-arr[0];
        int ans=-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(isPossible(arr,k,mid)){
                ans=max(ans,mid);
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends