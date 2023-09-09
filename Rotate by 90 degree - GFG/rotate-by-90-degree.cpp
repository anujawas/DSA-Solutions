//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void reverse(vector<int> &arr, int n){
        int lo=0, hi=n-1;
        while(lo<=hi){
            swap(arr[lo], arr[hi]);
            lo++;
            hi--;
        }
    }
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                swap(matrix[i][j], matrix[n-1-j][n-1-i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i],n);
        }
        
    } 
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends