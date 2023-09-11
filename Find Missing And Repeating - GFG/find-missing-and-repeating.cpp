//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<long long int> findTwoElement(vector<int> arr, int n) {
        long long int val1=0,val2=0;
        for(int i=0;i<n;i++){
            val1+=((long long int)arr[i] - (i+1));
            val2+=((long long)arr[i]* (long long)arr[i]  - (long long int)(i+1)*(i+1));
        }
        val2=val2/val1;
        
        long long int x=(long long int)(val1+val2)/2;
        long long int y=(long long int)(x-val1);
        vector<long long int>sol= {x,y};
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