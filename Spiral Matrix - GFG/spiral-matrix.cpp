//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &arr, int n, int m, int k)
    {
        int top=0,left=m-1,bot=n-1,right=0;
        int ptr=0;
        while(top<=bot or left>=right){
            for(int i=right;i<left;i++){
                ptr++;
                //cout<<arr[top][i]<<" ";
                if(ptr==k){
                    return arr[top][i];
                }
            }
            for(int i=top;i<bot;i++){
                ptr++;
                //cout<<arr[i][left]<<" ";
                if(ptr==k){
                    return arr[i][left];
                }
            }
            top++;
            for(int i=left;i>right;i--){
                ptr++;
                //cout<<arr[bot][i]<<" ";
                if(ptr==k){
                    return arr[bot][i];
                }
            }
            left--;
            for(int i=bot;i>=top;i--){
                ptr++;
                if(ptr==k){
                    return arr[i][right];
                }
            }
            bot--;
            right++;
            //cout<<top<<" "<<left<<" "<<bot<<" "<<right<<"\n";
        }
        return -1;
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends