
/*
  SOLVED: 12/29/2016

  problem only required method solution 
  this will not compile
*/

Node* Delete(Node *head, int position){
    Node* temp=head;
    Node* del=NULL;
    
    for(int i=1; i<position; i++)
        temp=temp->next;
    
    if(!position)
        return temp->next;
    
    del=temp->next;
    temp->next=del->next;
    delete del;
        
    return head;
}
