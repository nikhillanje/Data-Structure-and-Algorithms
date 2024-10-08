#include<stdio.h>
#define max_size 4
int front=-1;
int rear=-1;
int queue[max_size];
int  n;

void circ_enqueue(int n)
{
    if ((rear+1)%max_size==front)
    {
        printf("QUEUE IS FULL\n");
    }
    else if (front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=n;
    }
    else 
    {
     rear=(rear+1)%max_size;
     queue[rear]=n;
    }
}

void circ_dequeue()
{
    
    if(front==-1)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else if (front==rear)
    {

        printf("Deleted element: %d\n", queue[front]);
        front=-1;
        rear=-1;

    }
    else
    {
    
        printf("Deleted element: %d\n", queue[front]);
        front=(front+1)%max_size;
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
        int i = front;
        do
        {
            printf("%d\n", queue[i]);
            i = (i + 1) % max_size;
        } while (i != (rear + 1) % max_size);
        printf("\n");
    }
}

void main()
{


    int choice;
    do
    {
    printf("ENTER YOUR CHOICE\n");
    printf("1.CIRCULAR ENQUEUE\n");
    printf("2.CIRCULAR DEQUEUE\n");
    printf("3.CIRCULAR DISPLAY\n");
    printf("4.EXIT\n");
    scanf("%d",&choice);



    switch(choice)
    {
        case 1:
        printf("ENTER THE VALUE TO INSERT INTO QUEUE\n");
        scanf("%d",&n);
        circ_enqueue(n);
        break;

        case 2:
        circ_dequeue();
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