//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    int maxi=INT_MAX,mini=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>=x){
            maxi=min(maxi, arr[i]);
            
        }else{
            mini=max(mini,arr[i]);
        }
    }
    if(maxi==INT_MAX){
        maxi=-1;
    }
    if(maxi==x){
        pair<int,int> ans(maxi,maxi);
        return ans;
    }
    pair<int,int> ans(mini, maxi);
    return ans;
}