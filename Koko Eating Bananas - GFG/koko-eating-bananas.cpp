//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int totalHours(vector<int> piles, int hour,int n){
        int total=0;
        for(int i=0;i<n;i++){
            total+=ceil((double)piles[i]/(double)hour);
        }
        //cout<<hour<<" "<<total<<endl;
        return total;
    }
    int Solve(int n, vector<int>& piles, int H) {
        int maxVal=INT_MIN;
        for(int i=0;i<n;i++){
            maxVal=max(maxVal, piles[i]);
        }
        
        int lo=1,hi=maxVal;
        int ans=INT_MAX;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(totalHours(piles, mid,n)<=H){
                ans=min(ans,mid);
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends