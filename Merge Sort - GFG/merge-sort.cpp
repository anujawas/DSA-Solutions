//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        vector<int> V;
        int ptr1=l;
        int ptr2=m+1;
        while(ptr1<=m and ptr2<=r){
            if(arr[ptr1]>arr[ptr2]){
                V.push_back(arr[ptr2]);
                ptr2++;
            }else{
                V.push_back(arr[ptr1]);
                ptr1++;
            }
        }
        while(ptr2<=r){
            V.push_back(arr[ptr2]);
            ptr2++;
        }
        while(ptr1<=m){
            V.push_back(arr[ptr1]);
            ptr1++;
        }
        for(int i=l;i<=r;i++){
            arr[i]=V[i-l];
        }
        
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(r<=l ){
            return;
        }
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends