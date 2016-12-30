
/*
  SOLVED: 12/29/2016

  problem only required method solution 
  this will not compile
*/

void Print(Node *head){
    while(head){
        printf("%d\n", head->data);
        head=head->next;
    }
}