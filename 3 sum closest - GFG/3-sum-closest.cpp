//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int closest3Sum(int arr[], int n, int X)
    {
        sort(arr,arr+n);
        int diff=INT_MAX;
        int ind=0;
        for(int i=0;i<n;i++){
            // if(i>0 and arr[i]==arr
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum>X){
                    k--;
                    if(diff>abs(sum-X)){
                        ind=sum;
                        diff=abs(sum-X);
                    }
                }else if(sum<X){
                    j++;
                    if(diff>abs(sum-X)){
                        ind=sum;
                        diff=abs(sum-X);
                    }
                }else{
                    return sum;
                }
            }
            
            
        }
        return ind;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}
// } Driver Code Ends