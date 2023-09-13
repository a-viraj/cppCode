#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
typedef struct node Node;
Node* head=NULL;
void push()
{
    int val;
    Node* temp=(Node*)malloc(sizeof(Node*));
    printf("Enter the value: ");
    scanf("%d",&val);
    if(head==NULL)
    {    
        temp->data=val;
        temp->next=NULL;
        head=temp;
        return;
    }
    temp->data=val;
    temp->next=head;
    head=temp;
    return;
}
void pop()
{
    if(head==NULL)
    {
        printf("The stack is empty\n");
        return;
    }
    Node* temp=head;
    head=head->next;
    free(temp);
}
void display()
{
    if(head==NULL)
    {
        printf("The stack is empty\n");
        return;
    }
    Node* temp=head;
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
        printf("1.Push\n2.Pop\n3.Display\n4.exit\n");
        printf("Enter the choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();break;
            case 2:
            pop();break;
            case 3:
            display();break;
            case 4:
            break;
            default:
            printf("Enter a valid choice: ");
        }
    } while (ch!=4);
    
}