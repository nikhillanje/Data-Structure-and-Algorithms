#include<stdio.h>
#define max_size 10
int front=-1;
int rear=-1;
int queue[max_size];
int  n;

void enqueue(int n)
{
    if (rear==max_size-1)
    {
        printf("QUEUE IS FULL");
    }
    else 
    {
        if (front == -1) 
            front = 0;
        rear=rear+1;
        queue[rear]=n;
        printf("%d IS INSERTED IN QUEUE\n",n);
        

        
    }
}

void dequeue()
{
    int item;
    if(front==-1)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else if(front==rear)
    {
        printf("%d IS DELETED FROM QUEUE\n", queue[front]);
        rear=front=-1;
        
    }
    else
    {
     printf("%d IS DELETED FROM QUEUE\n", queue[front]);
     front=front+1;
    }
}

void display()
{
 if (front==-1)
 {
    printf("QUEUE IS EMPTY\n");
 }
 else
     {
        printf("ELEMENTS ARE\n");
        for (int i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);   
        }
        printf("\n");
    }
}

void main()
{


    int choice;
    do
    {
    printf("ENTER YOUR CHOICE\n");
    printf("1.ENQUEUE\n");
    printf("2.DEQUEUE\n");
    printf("3.DISPLAY\n");
    printf("4.EXIT\n");
    scanf("%d",&choice);



    switch(choice)
    {
        case 1:
        printf("ENTER THE VALUE TO INSERT INTO QUEUE\n");
        scanf("%d",&n);
        enqueue(n);
        break;

        case 2:
        dequeue();
        break;

        case 3:
        display();
        break;

        case 4:
        printf("EXIT!\n");
        break;

        default:
        printf("PLEASE ENTER THE VALID OPTION");
        break;
        } 

    } while(choice!=4);



}