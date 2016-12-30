
/*
  SOLVED: 12/29/2016

  problem only required method solution 
  this will not compile
*/

int GetNode(Node *head,int positionFromTail){
    Node* prev=NULL;
    Node* temp=head;
    
    while(temp){
        head=temp;
        temp=temp->next;
        head->next=prev;
        prev=head;
    }
    
    for(int i=0; i<positionFromTail; i++)
        head=head->next;
    
    return head->data;
}
