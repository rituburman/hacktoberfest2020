#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};



int main()
{
    Node *head=NULL,*lastNode=NULL;
    for(int i=1;i<=1000;i++){
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data=i;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            lastNode = head;
            head->next=head;
        }
        else{
            newNode->next=head;
            lastNode->next = newNode;
            lastNode=newNode;
        }

    }
    Node *tmp=head;
    while(tmp->next!=tmp){
        tmp->next=tmp->next->next;
        tmp = tmp->next;
    }
    cout<<tmp->data<<" Answer";

    return 0;
}
