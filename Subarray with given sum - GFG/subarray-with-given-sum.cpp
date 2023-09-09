//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        long long int sum=0;
        int left=0, right=0;
        vector<int> ans;
        while(left<=right){
            if(s==sum and sum>0){
                ans.push_back(left+1);
                ans.push_back(right);
                return ans;
            }else if(sum>s){
                sum-=arr[left];
                left++;
            }else{
                if(right==n){
                    break;
                }
                sum+=arr[right];
                right++;
            }
            //cout<<sum<<" "<<left<<" "<<right<<"\n";
        }
        ans.push_back(-1);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends