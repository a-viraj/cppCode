#include<stdio.h>
#include<ctype.h>
#define max 50
int stack[max];int top=-1,n;
void push(int a)
{
    if(top==n-1)
    {
        printf("Stack overflow\n");
        return;
    }
    top++;
    stack[top]=a;
}
void pop()
{
    if(top==-1)
    {
        printf("The stack is \n");
        return ;
    }
    top--;
}
int front()
{
    if(top==-1)
    {
        printf("The stack is empty \n");
        return -1;
    }
    return stack[top];
}
void display()
{
    if(top==-1)
    {
        return;
    }
    int k=top;
    while(k>=0)
    {
        printf("%d ",stack[k]);
        k--;
    }
}
int empty()
{
    if(top<0)
    {
        return 0;
    }
    return -1;
}
int main()
{
    n=50;
    char str[20];
    char *e;
    int n1,n2,n3,num;
    printf("Enter the expression: ");
    scanf("%s",str);
    e=str;
    while(*e!='\0')
    {
        if(isalnum(*e))
        {
            push((*e- 48));
        }
        else
        {
            n1=front();
            pop();
            n2=front();
            pop();
            switch(*e)
            {
                case '+' :n3=n1+n2;break;

                case '-' :n3=n2-n1;break;

                case '*' :n3=n1*n2;break;

                case '/' :n3=n2/n1;break;
            }
            push(n3);
        }
        e++;
    }
    printf("%d",front());
}