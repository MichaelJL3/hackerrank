
/*
	SOLVED: 12/30/2016

	will not compile:
	method only solution
*/

node* insert(node* root, int value){
   node* temp=root;
   node* curr=NULL;
   node* newnode = new node;
   newnode->left=NULL;
   newnode->right=NULL;
   newnode->data=value;
    
   if(!root)
       return newnode;
    
   while(temp){
       curr=temp;
       if(temp->data>value){
           temp=temp->left;
       }else{
           temp=temp->right;
       }
   }

   if(curr->data>value)
       curr->left=newnode;
   else
       curr->right=newnode;
    
   return root;
}