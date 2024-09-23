#include <stdio.h>
#include <string.h>
int top=-1;
int x;
char a[30];

void push (char x)
{
    top=top+1;
    a[top]=x;
}

void pop()
{
    top=top-1;
}

void main()
{
 char str[30];
 char c;


 printf("ENTER THE STRING\n");
 scanf("%s",str);

 for (int i=0; i<strlen(str); i++)
 {
    c=str[i];

    if (c=='(' || c=='[')
    {
        push (c);
    }
    else 
    {
        if (c==')' && a[top]=='(')
        {
            pop ();
        }
        else if (c=='}' && a[top] == '{')
        {
            pop();
        }
        else if (c==']' && a[top]=='[')
        {
            pop();
        }
        else if (c==']' || c== '}' || c==')')
        {
            push (c);
            break;
        }
        else 
        {
         continue;
        }
    }

    }
    if (top!=-1)
    {
        printf("STRING ID IMBALANCED");

    }
    else
    {
        printf("STRING IS BALANCED");
    } 
 
}