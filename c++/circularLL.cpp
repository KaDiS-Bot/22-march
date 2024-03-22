#include<iostream>
using namespace std;

class Node{
    public:
        int data ;
        Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    // ~Node(){
    //     int value=this->data;
    //     if(this->next!=NULL){
    //         delete next;
    //         next=NULL;
    //     }
    //     cout<<" memory is free for node with data" <<value<<endl;
    // }
};

void insertAtTail(Node* &tail,int element,int data){

    //empty list
    if(tail==NULL){
        Node* newNode=new Node(data);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        Node* curr=tail;
        while(curr->data != element){
            curr=curr->next;
        }

        Node* temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void print(Node* &tail){
    
    Node* temp=tail;
    do
    {
        cout<<tail->data<<"->";
        tail=tail->next;
    } while (tail!= temp);
    cout<<endl;
    
}
int main()
{
    Node* tail=NULL;
    insertAtTail(tail,5,3);
    print(tail);
    insertAtTail(tail,3,5);
    print(tail);
    insertAtTail(tail,5,3);
    print(tail);
    insertAtTail(tail,3,5);
    print(tail);
    insertAtTail(tail,5,3);
    print(tail);
    return 0;
}