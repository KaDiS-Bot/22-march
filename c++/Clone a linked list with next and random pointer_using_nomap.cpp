 
class Solution
{
    private:
    void insertatTail(Node* &head, Node* &tail, int d){
        Node* newNode=new Node(d);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    public:
    Node *copyList(Node *head)
    {
        //Write your code here
        if (head == NULL)
            return NULL;

        Node* temp=head;
        Node* cloneHead=NULL;
        Node* cloneTail=NULL;
        while (temp!=NULL){
            insertatTail(cloneHead,cloneTail,temp->data);
            temp=temp->next;
            
        }
        
        Node* original=head;
        Node* clone=cloneHead;
        Node* ogNext=NULL;
        Node* cloneNext=NULL;
        while(original!=NULL && clone!=NULL){
            ogNext=original->next;
            cloneNext=clone->next;
            original->next=clone;
            clone->next=ogNext;
            original=ogNext;
            clone=cloneNext;
            
        }
         temp=head;
        while(temp!=NULL){
            if (temp->next!=NULL){
                if (temp->arb!=NULL){
                    temp->next->arb=temp->arb->next;
                    }
                else{
                    temp->next->arb=NULL;
                }
            }   
            
             temp = temp->next != NULL ? temp->next->next : NULL;
                    
        }
         original=head;
        clone=cloneHead;
        while(original!=NULL && clone!=NULL){
            original->next=clone->next;
            original=original->next;
            if(original!=NULL){
            clone->next=original->next;
            }
            clone=clone->next;
            
        }
         return cloneHead;
    }

};
