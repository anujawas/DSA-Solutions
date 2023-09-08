//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      unordered_set<int> set;
      for(int i=0;i<n;i++){
          set.insert(arr[i]);
      }
      int ans=1, count;
      for(auto i=set.begin();i!=set.end();i++){
          
          if(set.find(*i -1) == set.end()){
              count=*i;
              int local=1;
              while(set.find(count+1)!=set.end()){
                  local++;
                  count++;
              }
              ans=max(ans,local);
          }
      }
      return ans;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends