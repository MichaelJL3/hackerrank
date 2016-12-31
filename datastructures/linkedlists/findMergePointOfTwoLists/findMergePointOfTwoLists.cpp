
/*
	SOLVED: 12/30/2016

	Will not compile:
	method only solution
*/

bool isin(Node* head, int val){
    while(head){
        if(head->data==val)
            return true;
        head=head->next;
    }
    return false;
}

int FindMergeNode(Node *headA, Node *headB){
    Node* temp=headA;
    
    while(headA){
        if(isin(headB, headA->data))
            return headA->data;
        headA=headA->next;
    }
    
    return -1;
}