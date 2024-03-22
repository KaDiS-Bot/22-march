#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data=data;
            this->next=NULL;
        }
        ~Node(){
            int value = this->data;
            if (this->next!=NULL){
                delete next;
                this->next=NULL;
            }
        }
};

void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void insertAtPosition(Node* &tail,Node* &head,int position , int data){
    int cnt=1;
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    Node* temp = head;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if (temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;  
    }

void deletePosition(Node* &head,Node* tail, int position ){
    Node* temp= head;
    int cnt=1;
    if (position==1){
        temp=temp->next;
        head=temp;
        temp->next=NULL;
        delete temp;
    }
    else{
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    Node* temp2 = temp->next;
    if (temp2->next==NULL){
        tail=temp;        
        temp->next=temp2->next;
        return;
    }
    temp->next=temp2->next;
    }
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        
    }
    cout<<endl;
}

int main()
{
    Node* node1 = new Node(100);
    Node* head=node1;
    Node* tail=node1;
    
    print(head);

    insertAtHead(head,80);
    print(head);

    insertAtTail(tail,120);
    print(head);

    insertAtPosition(tail , head , 4 , 110);
    print(head);
    deletePosition(head,tail,2);
    print(head);

    // cout<<"head - > " << head->data <<endl;
    // cout<<"tail - > " << tail->data <<endl;
    return 0;
}





