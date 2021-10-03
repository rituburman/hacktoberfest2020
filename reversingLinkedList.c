// Program to reverse linked list using recursion.

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *link;
} *START = NULL;

void insertNode(int);
void printLinkedList();
void reverseLinkedList(struct Node *);

int main(){
    insertNode(10);
    insertNode(20);
    insertNode(30);
    insertNode(40);
    printf("Original Linked List: ");
    printLinkedList();
    reverseLinkedList(START);
    printf("Reversed Linked List: ");
    printLinkedList();
    return 0;
}

void insertNode(int key){
    struct Node *ptr = malloc(sizeof(struct Node));
    ptr->data = key;
    ptr->link = NULL;
    if(START == NULL){
        START = ptr;
        return;
    }
    struct Node *temp = START;
    while(temp->link != NULL){
        temp = temp->link;
    }
    temp->link = ptr;
}

void printLinkedList(){
    if(START == NULL){
        printf("Empty Linked List!\n");
        return;
    }
    struct Node *ptr = START;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}


// Reversing Linked List using Recursion
void reverseLinkedList(struct Node *ptr){
    if(ptr == NULL) {
        return;
    }
    if(ptr->link == NULL){
        START = ptr;
        return;
    }
    reverseLinkedList(ptr->link);
    struct Node *temp = ptr->link;
    temp->link = ptr;
    ptr->link = NULL;
}
