
/*
	SOLVED: 12/30/2016

	Will not compile:
	method only solution
*/

Node* SortedInsert(Node *head,int data){
   Node* temp=head;
   Node* curr;
   
   Node* insert=new Node;
   insert->data=data;
   insert->prev=NULL;
   insert->next=NULL;
    
   if(!head)
       return insert;
   else if(temp->data>data){
       insert->next=temp;
       temp->prev=insert;
       return insert;
   }
    
   while(temp&&temp->data<data){
        curr=temp;
        temp=temp->next;
   }
   
   insert->next=curr->next;
   curr->next=insert;
   insert->prev=curr;
    
   return head;
}