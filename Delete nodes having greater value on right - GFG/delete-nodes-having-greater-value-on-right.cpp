//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node* ReverseList(Node *head){
        if(head==NULL){
            return NULL;
        }
        Node* prev=NULL;
        Node* curr=head;
        Node* next=head->next;
        //Node* upcoming=head->next-next;
        while(next!=NULL){
            curr->next=prev;
            prev=curr;
            curr=next;
            next=next->next;
        }
        curr->next=prev;
        return curr;
    }
    Node *compute(Node *head)
    {
        head= ReverseList(head);
        int maxData=head->data;
        Node *temp=head;
        while(temp->next!=NULL){
            if(temp->next->data>=maxData){
                temp=temp->next;
                maxData=temp->data;
            }
            else{
                Node* val=temp->next;
                temp->next=val->next;
                delete val;
            }
        }
        return ReverseList(head);
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends