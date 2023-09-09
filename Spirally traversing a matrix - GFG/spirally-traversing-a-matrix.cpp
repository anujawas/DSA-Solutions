//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > arr, int r, int c) 
    {
        int top=0,left=c-1,bot=r-1,right=0;
        vector<int> ans;
        while(top<=bot or left>right){
            if(top<=bot){
                for(int i=right;i<=left;i++){
                    ans.push_back(arr[top][i]);
                }
                top++;
            }if(left>=right){
                for(int i=top;i<=bot;i++){
                    ans.push_back(arr[i][left]);
                }
                left--;
            }
            if(top<=bot){
                for(int i=left;i>=right;i--){
                    ans.push_back(arr[bot][i]);
                }
                bot--;
            }
            if(left>=right){
                for(int i=bot;i>=top;i--){
                    ans.push_back(arr[i][right]);
                }
                right++;
            }
            //cout<<top<<" "<<left<<" "<<bot<<" "<<right<<"\n";
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends