
#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
Node* reverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
Node* insertAtTail(Node* &head, Node* &tail, int val){
    Node* temp=new Node(val);
    if(head==NULL ){
        head=temp;
        tail=temp;
        return head;
    }
    else{
        tail->next=temp;
        tail=temp;
        
    }
}

struct Node* ans(Node* first, Node* second){
    int carry=0;
    Node* ansHead=NULL;
    Node* ansTail=NULL;
    while(first!=NULL && second!=NULL){
            int sum=carry + first->data+second->data;   
            int digit=sum%10;
        insertAtTail(ansHead,ansTail,digit);
         carry=sum/10;
        first=first->next;
        second=second->next;
    }
    while(first!= NULL){        
        int sum=carry + first->data;
        int digit=sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry=sum/10;
        first=first->next;
        
    }
    while(second!=NULL){
        int sum=carry + second->data;        
        int digit=sum%10;
        insertAtTail(ansHead,ansTail,digit);
         carry=sum/10;
        second=second->next;    
        
}
    while(carry!=0){
        int sum=carry ;
        int digit=sum%10;
        insertAtTail(ansHead,ansTail,digit);
         carry=sum/10;
    }
    return ansHead;
}
class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
    first=reverse(first);
    second=reverse(second);
    Node* anss=ans(first,second);
    anss=reverse(anss);
    return (anss);
    
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

