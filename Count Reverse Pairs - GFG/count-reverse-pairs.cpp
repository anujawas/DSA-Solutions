//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  long long ans=0;
  
  void count(vector<int> &arr, long long start, long long mid, long long end){
    long long right=mid+1;
    for(int i=start;i<=mid;i++){
        while(right<=end and arr[i]>2*arr[right]){
            right++;
        }
        ans+=(right-mid-1);
    }
  }
  void merge(vector<int> &arr, long long start, long long mid, long long end){
      long long left=start, right=mid+1;
      vector<int> sol;
      while(left<=mid and right<=end){
          if(arr[left]>arr[right]){
              sol.push_back(arr[right]);
              right++;
          }else{
              sol.push_back(arr[left]);
              left++;
          }
      }
      while(left<=mid){
          sol.push_back(arr[left++]);
      }
      while(right<=end){
          sol.push_back(arr[right++]);
      }
      for(int i=start;i<=end;i++){
          arr[i]=sol[i-start];
      }
      
  }
    void mergeSort(vector<int> &arr, long long start, long long end){
        if(end<=start){
            return;
        }
        int mid=start+(end-start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1, end);
        count(arr,start, mid, end);
        merge(arr,start, mid, end);
    }
    int countRevPairs(int n, vector<int> arr) {
        ans=0;
        mergeSort(arr,0,n-1);
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
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countRevPairs(n, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends