
/*
	SOLVED: 12/30/2016

	problem only required method solution 
	this will not compile
*/

Node* RemoveDuplicates(Node* head){
	Node* temp=head
	Node* del;

	if(!head)
		return head;

	while(temp->next){
		if(temp->data==temp->next->data){
			del=temp->next;
			temp->next=temp->next->next;
			free(del);
		}else
			temp=temp->next;
	}

	return head;
}