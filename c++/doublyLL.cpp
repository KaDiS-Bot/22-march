#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int data){
            this->data=data;
            this->next=NULL;
            this->prev=NULL;
        }
};

int getLength(Node* &head){
    Node* temp = head;
    int cnt=1;
    while(temp->next!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void print(Node* &head){
    Node* temp= head;
    while(temp!=0) {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtHead(Node* &head , int data){
    Node* temp = new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtTail(Node* &tail,int data){
    Node* temp= new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

}
void insertInMiddle(Node* &head, Node* &tail , int position , int data){
    if (position==1){
        insertAtHead(head,data);
        return;
    }
    Node* temp= head;
    int cnt =1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;

    }
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }
    Node* nextTOnext=temp->next;

    Node* nodeToInsert=new Node(data);
    
    nodeToInsert->next=temp->next;
    nextTOnext->prev=nodeToInsert;
    // temp->next->prev=nodeToInsert;

    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}
void deletePosition(Node* &head,int Position){
    Node* temp=head;
        int cnt=1;
        while(cnt<Position){
            temp=temp->next;
            cnt++;
        }
    if (Position==1){
        head=head->next;
        head->prev=NULL;
    }
    else if (temp->next==NULL)
    {
        temp->prev->next=NULL;
        temp=temp->prev;
    }
    else{
        
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        temp=temp->next;
    }
}

int main()
{
    Node* node1=new Node(100);
    
    
    Node* head= node1;   
    Node* tail=node1;
    print(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head,80);
    print(head);
    cout<<getLength(head)<<endl;

    insertAtTail(tail,160);
    print(head);
    cout<<getLength(head)<<endl;

    insertInMiddle(head,tail,4,200);    
    print(head);
    cout<<getLength(head)<<endl;


    deletePosition(head,4);
    print(head);
    cout<<getLength(head)<<endl;

    return 0;
}