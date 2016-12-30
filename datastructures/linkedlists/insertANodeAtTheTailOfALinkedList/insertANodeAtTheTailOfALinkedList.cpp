
/*
  SOLVED: 12/29/2016

  problem only required method solution 
  this will not compile
*/

Node* Insert(Node *head,int data){
    Node* tail=new Node;
    Node* temp=head;
    tail->data=data;
    
    if(!head)
        return tail;
    
    while(temp->next){
        temp=temp->next;
    }
    
    temp->next=tail;
    return head;
}
