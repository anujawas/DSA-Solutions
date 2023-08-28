//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        vector<string> words;
        string delimiter = ".";
        
        size_t pos = 0;
        while ((pos = S.find(delimiter)) != string::npos) {
            words.push_back(S.substr(0, pos));
            S.erase(0, pos + delimiter.length());
        }
        words.push_back(S);
    
        reverse(words.begin(), words.end());
    
        string reversed = "";
        for (const std::string& word : words) {
            reversed += word + ".";
        }
        reversed.pop_back(); // Remove the last "." added
    
        return reversed;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends