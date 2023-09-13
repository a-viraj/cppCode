#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
typedef struct node Node;
Node* front=NULL;
Node* back=NULL;
void push()
{
    int val;
    printf("Enter the value of Node: ");
    scanf("%d",&val);
    Node* n=(Node*)malloc(sizeof(Node*));
    n->data=val;
    n->next=NULL;
    if(front==NULL)
    {
        back=n;
        front=n;
        return;
    }
    back->next=n;
    back=n;
}
void pop()
{
    if(front==NULL)
    {
        printf("Queue underflow\n");
        return;
    }
    Node* temp=front;
    front=front->next;
    free(temp);
}
int peek()
{
    if(front==NULL)
    {
        return -1;
    }
    return front->data;
}
void print()
{
    if(front==NULL)
    { 
        printf("The queue is empty\n");
        return;
    }
    Node* temp=front;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    int ch;
    do
    {
        printf("1.Push\n2.Pop\n3.peek\n4.display\n5.exit\n");
        printf("Enter the choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();break;
            case 2:
            pop();break;
            case 3:
            printf("%d\n",peek());break;
            case 4:
            print();break;
            case 5:
            break;
            default:
            printf("Enter a valid choice: ");
            break;
        }
    } while (ch!=5);
    
}