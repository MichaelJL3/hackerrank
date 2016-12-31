
/*
	SOLVED: 12/30/2016

	Will not compile:
	method only solution
*/

bool has_cycle(Node* head) {
    int count=0;
    
    while(head){
        if(count>100)
            return true;
        head=head->next;
        count++;
    }
    
    return false;
}