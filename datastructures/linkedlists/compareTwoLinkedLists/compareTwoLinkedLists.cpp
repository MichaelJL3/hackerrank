
/*
  SOLVED: 12/29/2016

  problem only required method solution 
  this will not compile
*/

int CompareLists(Node *headA, Node* headB){
    while(headA&&headB){
        if(headA->data!=headB->data)
            return 0;
        headA=headA->next;
        headB=headB->next;
    }  
    
    if(headA||headB)
        return 0;
    
    return 1;
}