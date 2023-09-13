#include<stdio.h>
#include<string.h>
#define max 50
char stack[max];int top=-1,n;
void push(char a)
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
char front()
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
        printf("%c ",stack[k]);
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
int prec(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='*'||c=='/')
    {
        return 2;
    }
    else if(c=='+'||c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
void postfix(char a[])
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z' || (a[i] >= '0' && a[i] <= '9'))
        {
            printf("%c",a[i]);
        }
        else if(a[i]=='(')
        {
            push(a[i]);
        }
        else if(a[i]==')')
        {
            while(front()!='(')
            {
                printf("%c",front());
                pop();
            }
            pop();
        }
        else{
            while(empty()!=0 && prec(a[i])<=prec(front()))
            {
                printf("%c",front());
                pop();
            }
            push(a[i]);
        }
    }
    while(empty()!=0)
    {
        printf("%c",front());
        pop();
    }
}
int main()
{
    char a[]={"A*(B*C+D*E)+F"};
    n=strlen(a);
    postfix(a);

}