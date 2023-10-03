//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int numDays(int arr[], int n, int cap){
        int ans=0;
        int temp_cap=0;
        for(int i=0;i<n;i++){
            temp_cap+=arr[i];
            if(i!=n-1 and temp_cap+arr[i+1]>cap){
                temp_cap=0;
                ans++;
            }
        }
        
        if(temp_cap>cap){
            return ans +ceil((double)temp_cap/cap);
        }
        return ans+1;
        
    }
    int leastWeightCapacity(int arr[], int N, int D) {
        int sum=0;
        int maxi=-1;
        for(int i=0;i<N;i++){
            sum+=arr[i];
            maxi=max(maxi,arr[i]);
        }
        if(D==N){
            return maxi;
        }
        if(D==1){
            return sum;
        }
        
        
        int lo=maxi, hi=sum;
        int ans=INT_MAX;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            int val=numDays(arr,N,mid);
            if(val<=D){
                ans=min(mid,ans);
                hi=mid-1;
            }
            else{
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
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends