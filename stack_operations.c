#include <stdio.h>
#define MAXSIZE 10 

int stack[MAXSIZE];
int top = -1;


void push(int value) 
{
    if (top <= MAXSIZE - 1) 
    {
        top++;
        stack[top] = value;
    } 
    else 
    {
     printf("Stack Overflow");   
    }
}


int pop() 
{
    int value;
    if (top > -1) 
    {
        value = stack[top];
        top--;
        return value;
        
    } 
    else 
    {
     printf("Stack Underflow\n");
        return -1;   
    }
}


void display() 
{
    if (top == -1) 
    {
        printf("Stack is empty\n");
    } 
    else 
    {
        printf("YOUR STACK IS:\n");
        for (int i = top; i >= 0; i--) 
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main() 
{
    int choice, value;

    while (1) 
    {
        printf("\n Chose Stack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                if (value != -1) 
                {
                    printf("Popped element: %d\n", value);
                }
                break;
            case 3:
                display();
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
