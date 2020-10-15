// This program illustrates the concept of Queue Data Structure using doubly linked list.
// Methods for push, pop, and displaying the contents of the queue have been programmed.


#include<iostream>
#define MAX 5
using namespace std;

class node
{
public:
    node* next;
    int data;
    node* prev;
};

node* front = NULL;
node* rear = NULL;

bool isEmpty() // To check if the Queue is empty
{
    if(front == NULL && rear == NULL)
    {
        return true;
    }
    return false;
}

bool isFull(int n) // To check if the queue is full
{
    if(n == MAX)
    {
        return true;
    }
    return false;
}

void push(node* new_node, int n) // Inserts the element to the end of queue
{
    if(isFull(n))
    {
        cout << "Overflow!!\n";
    }
    else
    {
        if(n == 0)
        {
            front = new_node;
            rear = new_node;
            new_node->next = NULL;
            new_node->prev = NULL;
        }
        else
        {
            new_node->next = NULL;
            new_node->prev = rear;
            rear->next = new_node;
            rear = new_node;
        }
    }
}

int pop() // Removes the front element from the queue.
{
    if(isEmpty())
    {
        cout << "Underflow!!\n";
        return -1;
    }
    else
    {
        node* temp = front;
        int item;
        if(front == rear)
        {
            item = temp->data;
            front = NULL;
            rear = NULL;
            delete temp;
        }
        else
        {
            item = temp->data;
            temp->next->prev = NULL;
            front = temp->next;
            delete temp;
        }
        return item;
    }
}

void display() // Displays the contents of queue
{
    if(isEmpty())
    {
        cout << "Underflow!!\n";
    }
    else
    {
        node* temp = front;
        while(temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    
}

// Driver Method
int main()
{
    int n=0,choice;
    while(1)
    {
        cout << "\n1.Push\n";
        cout << "\n2.Pop\n";
        cout << "\n3.Display\n";
        cout << "\n4.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
            {
                node* new_node = new node();
                int item;
                cout << "Enter the element you want to push into the Queue: ";
                cin >> item;
                new_node->data = item;
                push(new_node, n);
                n++;
                break;
            }
            case 2:
            {
                int popped = pop();
                cout << popped << endl;
                n--;
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                return 0;
            }
            default:
                cout << "Enter the valid choice!!\n";
        }
    }
}