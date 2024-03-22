//{ Driver Code Starts
// driver

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
#include<vector>
class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
       Node* temp1=first;
       Node* temp2=second;
       vector<int>arr1;
       vector<int>arr2;
       int val1=0;
       int val2=0;
       while(temp1!=NULL){
           arr1.push_back(temp1->data);
           temp1=temp1->next;
       }
       while(temp2!=NULL){
           arr2.push_back(temp2->data);
            temp2=temp2->next;
       }
       for(int i=0;i<arr1.size();i++){
           val1=val1*10+arr1[i];
       }
       for(int i=0;i<arr2.size();i++){
           val2=val2*10+arr2[i];
       }
       int val3=val1+val2;
       
       int reversed_number=0 ;
       int remainderr=0;
       while (val3!=0){
           remainderr=val3%10;
            reversed_number=reversed_number*10+remainderr;
            val3=val3/10;
       }
       
        
        Node* result = nullptr;
Node* tail = nullptr; // Pointer to the end of the list

while (reversed_number != 0) {
    int digit = reversed_number % 10;
    reversed_number /= 10;
    Node* newNode = new Node(digit);

    if (result == nullptr) {
        result = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}
        return result;
       
       
       
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

// } Driver Code Ends
