//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long mod =1000000007;
    long long countWays(int n)
    {
        long long first=1;
        if(n==1) return first;
        long long second=2;
        if(n==2) return second;
        long long third=4;
        if(n==3) return third;
        long long ans=0;
        for(int i=4;i<=n;i++){
            ans=(first+second+third)%mod;
            first=second;
            second=third;
            third=ans;
        }
        return ans;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends