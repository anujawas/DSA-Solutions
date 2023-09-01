//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}

struct Node * mergeResult(struct Node *node1,struct Node *node2);

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }

        struct Node* result = mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends


/*

The structure of linked list is the following

struct Node
{
int data;
Node* next;
};

*/
struct Node* reverse(Node* root){
    if(root==NULL){
        return NULL;
    }
    Node * prev=NULL;
    Node* curr=root;
    Node* next=root->next;
    while(next){
        curr->next=prev;
        prev=curr;
        curr=next;
        next=next->next;
    }
    curr->next=prev;
    return curr;
    
}

struct Node* solve(Node * node1, Node* node2){
    if(node1==NULL or node2==NULL){
        return (node1==NULL?node2:node1);
    }
    Node* head=(node1->data>node2->data)?node1:node2;
    if(head==node1){
        head->next=solve(node1->next,node2);
    }else{
        head->next=solve(node1,node2->next);
    }
    return head;
}

struct Node * mergeResult(Node *node1,Node *node2)
{
    
    node1=reverse(node1);
    node2=reverse(node2);
    return solve(node1, node2);
    
}