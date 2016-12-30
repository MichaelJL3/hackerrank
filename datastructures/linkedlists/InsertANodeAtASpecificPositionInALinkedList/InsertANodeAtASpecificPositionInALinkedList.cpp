
/*
  SOLVED: 12/29/2016

  problem only required method solution 
  this will not compile
*/

Node* InsertNth(Node *head, int data, int position){
    Node* temp=head;
    Node* insert=new Node;
    insert->data=data;
    
    if(!position){
        insert->next=head;
        return insert;
    }
    
    for(int i=1; i<position; i++){
        temp=temp->next;
    }
    
    insert->next=temp->next;
    temp->next=insert;
    
    return head; 
}
