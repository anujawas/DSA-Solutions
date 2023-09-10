//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int X) {
        set<vector<int>> dummy;
        sort(arr.begin(), arr.end());
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(i>0 and arr[i]==arr[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j>1 and arr[j]==arr[j-1] and arr[i]!=arr[j] ) continue;
                int k=j+1, l=n-1;
                while(k<l){
                    int sum=arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum>X){
                        l--;
                    }else if(sum<X){
                        k++;
                    }else{
                        vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
                        dummy.insert(temp);
                        l--;
                        k++;
                        while(k<l and arr[k]==arr[k-1]) k++;
                        while(k<l and arr[l]==arr[l+1]) l--;
                    }
                }
            }
        }
        vector<vector<int>> ans(dummy.begin(), dummy.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends