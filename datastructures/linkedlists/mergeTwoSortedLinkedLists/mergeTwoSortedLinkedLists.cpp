
/*
  SOLVED: 12/29/2016

  problem only required method solution 
  this will not compile
*/

Node* MergeLists(Node *headA, Node* headB){
    Node* head=new Node;
    Node* temp=head;
    int valA, valB;
    
    while(headA&&headB){
        valA=headA->data;
        valB=headB->data;
        if(valA>valB){
            temp->next=new Node;
            temp=temp->next;
            temp->data=valB;
            headB=headB->next;
        }
        else{
            temp->next=new Node;
            temp=temp->next;
            temp->data=valA;
            headA=headA->next;
        }
    }
    
    if(headA)
        temp->next=headA;
    else if(headB)
        temp->next=headB;
    
    temp=head->next;
    delete head;
        
    return temp;
}
