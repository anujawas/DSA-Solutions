//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        int ans[n+1]={0};
        for(int i=0;i<n;i++){
            ans[arr[i]]++;
        }
        
        int miss=0, repeat=0;
        for(int i=1;i<=n;i++){
            if(ans[i]==0){
                miss=i;
            }if(ans[i]==2){
                repeat=i;
            }
        }
        vector<int> sol={repeat,miss};
        return sol;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends