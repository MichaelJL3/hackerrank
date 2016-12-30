
/*
  SOLVED: 12/29/2016

  problem only required method solution 
  this will not compile
*/

Node* Insert(Node *head,int data){
    Node* newHead = new Node;
    newHead->data=data;
    newHead->next=head;
    
    return newHead;
}

