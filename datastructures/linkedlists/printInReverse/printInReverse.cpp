
/*
  SOLVED: 12/29/2016

  problem only required method solution 
  this will not compile
*/

void ReversePrint(Node *head){
    Node* prev=NULL;
    Node* temp=head;
    
    while(temp){
        head=temp;
        temp=temp->next;
        head->next=prev;
        prev=head;
    }
    
    while(head){
        printf("%d\n", head->data);
        head=head->next;
    }
}