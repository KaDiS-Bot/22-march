// // #include<iostream>
// // using namespace std;

// // class Node{
// //     public:
// //         int data;
// //         Node* next;
// //         Node(int data){
// //             this -> data=data;
// //             this -> next=NULL;
// //         }
// // };

// // void insertAtHead(Node* &head,int d){
// //       Node* temp= new Node(d);
// //       temp->next=head;
// //       head=temp;
// // }
// // void print(Node* &head){
// //     Node* temp=head;
// //     while (temp != NULL){
// //         cout<<temp->data<<"->";
// //         temp=temp->next;
// //     }
// //     cout<<endl;
// // }

// // int main()
// // {
// //     Node* node1 = new Node(100);
// //     // cout<< node1 -> next<<endl;
// //     // cout<< node1 -> data<<endl;
    
// //     Node* head=node1;
// //     print(head);

// //     insertAtHead(head,12);
// //     print(head);

// //     return 0;
// // }



// #include<iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };

// void insertAthead(Node* &head , int d){
//     Node* temp = new Node(d);
//     temp->next=head;
//     head=temp;
// }

// void insertAtTail(Node* &tail,int d){
//     Node*temp= new Node(d);
//     tail->next=temp;
//     tail=temp;
// }

// void print(Node* &head){
//     Node* temp =head;
//     while (temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<endl;
// }


// int main()
// {
    
//     Node* node1 = new Node(120);
//     Node* head=node1;
//     Node* tail=node1;
//     print(head);

//     // insertAthead(head,100);
//     // print(head);

//     // insertAthead(head,80);
//     // print(head);
//     insertAtTail(tail,140);
//     print(head);

//     insertAtTail(tail,200);
//     print(head);

//     return 0;
// }


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
void insertAtPosition(Node* &head,int position , int data){
    int cnt=1;
    Node* temp = head;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;  
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

    insertAtPosition(head , 4 , 110);
    print(head);

    cout<<"head - > " << head->data <<endl;
    cout<<"tail - > " << tail->data <<endl;
    return 0;
}





