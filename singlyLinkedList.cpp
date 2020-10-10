//only for positive numbers

#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
   int NumberofInput=0;
   cout<<"Enter The Elements and enter a negative number  to stop entering the element and start displaying them"<<endl;
   while(NumberofInput>=0)
   {
     cin>>NumberofInput;
     insert(NumberofInput);
   
   }
   cout<<"The linked list is: ";
   display();
   return 0;
}
