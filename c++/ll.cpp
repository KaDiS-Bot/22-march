#include<iostream>
using namespace std;

class Node
{
private:
    /* data */
public:
    int value;
    Node* next;
    Node(int value){
        this->value=value;
        this->next=nullptr;
    };
    
};
class LinkedList{
    private:
        Node* head;
    public:
        LinkedList(){
            head=nullptr;
        }
    void addFirst(int value){
        Node* newNode = new Node(value);
        if (head==nullptr){
            head=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    void printlist(){
        Node* currNode=head;
        while(currNode!=nullptr){
            cout<<currNode->value<<""<<endl;
            currNode=currNode->next;
        }
    }
};


int main()
{
    LinkedList mylist;
    mylist.addFirst(5);
    mylist.addFirst(4);
    mylist.addFirst(6);
    mylist.addFirst(1);

    mylist.printlist();
    return 0;
}