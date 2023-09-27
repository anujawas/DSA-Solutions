//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long divSum(vector<int> arr, int k){
        long long ans=0;
        for(int i=0;i<arr.size();i++){
            ans+=ceil((double)arr[i]/(double)k);
        }
        return ans;
    }
    int smallestDivisor(vector<int>& nums, int K) {
        
        int lo=1, hi=INT_MIN, n=nums.size();
        for(int i=0;i<n;i++){
            hi=max(hi,nums[i]);
        }
        int ans=INT_MAX;
        while(lo<=hi){
            int mid=(lo+hi)/2;
             long long sum=divSum(nums,mid);
             if(sum<=K){
                 hi=mid-1;
                 ans=min(ans, mid);
             }else{
                 lo=mid+1;
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
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends