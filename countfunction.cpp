  int getCount(struct Node* head){

 Node* n;
 n=head->next;
 int count=1;
 while(n!=NULL)
 {
     count++;
     n=n->next;
 }
 return count;

}
