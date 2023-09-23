//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool isPossible(vector<int>arr, int k, int m, int day){
        int cons=0;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(day>=arr[i]){
                cons++;
            }else{
                ans+=(cons/k);
                cons=0;
            }
        }
        ans+=cons/k;
        
        return ans>=m;
    }
    int solve(int m, int k, vector<int> &arr){
        int n=arr.size();
        if(m*k>n){
            return -1;
        }
        
        int hi=INT_MIN;
        for(int i=0;i<n;i++){
            hi=max(hi,arr[i]);
        }
        int lo=1;
        int ans=INT_MAX;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(isPossible(arr,k,m,mid)){
                ans=min(ans,mid);
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    }
    return 0;
}
// } Driver Code Ends