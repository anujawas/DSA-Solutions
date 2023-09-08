//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void reverse(vector<int> &arr, int i, int j){
        while(i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    vector<int> nextPermutation(int n, vector<int> arr){
        
        int ind=-1;
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==-1){
            reverse(arr,0,n-1);
            return arr;
        }
        for(int i=n-1;i>ind;i--){
            if(arr[i]>arr[ind]){
                swap(arr[i],arr[ind]);
                break;
            }
        }
        reverse(arr,ind+1,n-1);
        
        return arr;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends