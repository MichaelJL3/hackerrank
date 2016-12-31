
/*
	SOLVED: 12/30/2016

	Will not compile:
	method only solution
*/

Node* Reverse(Node* head){
    Node* temp=head;
    Node* next=NULL;
    Node* prev=NULL;
    Node* curr=NULL;
    
    while(temp){
        next=temp->prev;
        prev=temp->next;
        curr=temp;
        temp=prev;
        curr->next=next;
        curr->prev=prev;
    }
    
    return curr;
}
