//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        vector<int> ans;
        int cnt1=0, cnt2=0, el1=INT_MIN, el2=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(cnt1==0 and nums[i]!=el2){
                cnt1=1;
                el1=nums[i];
            }else if(cnt2==0 and nums[i]!=el1){
                cnt2=1;
                el2=nums[i];
            }else if(nums[i]==el1) cnt1++;
            else if(nums[i]==el2) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        
        cnt1=0;
        cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==el1) cnt1++;
            if(nums[i]==el2) cnt2++;
        }
        int maj=n/3 +1;
        if(cnt1>=maj) ans.push_back(el1);
        if(cnt2>=maj) ans.push_back(el2);
        
        if(ans.size()==0){
            ans.push_back(-1);
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
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res) cout << x << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends