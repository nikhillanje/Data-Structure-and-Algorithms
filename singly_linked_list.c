
/*
Name:- Nikhil Lanje
Class SY-1
Roll No-113
Subject:- DS

*/
#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node* next;
};
//struct node* head=NULL;
struct node* temp,* head=NULL,*temp1;

void insert_at_beg(int element)
{
    temp=(struct node*) malloc(sizeof(struct node));
    temp->data=element;
    temp->next=head;
    head = temp;
}

void insert_at_end(int element)
{
    //struct node* temp,*temp1;
    temp=(struct node*) malloc(sizeof(struct node));
    temp->data=element;
    temp->next=NULL;

    if (head==NULL)
    {
        head=temp;
    }
    else
    {
        temp1=head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next = temp;
     
    }

}

void insert_at_nth_position(int element, int position)
{ 
    //struct node* temp,*temp1;
    temp=(struct node*) malloc(sizeof(struct node));
    temp->data=element;

    if (position==1)
    {
        temp->next=head;
        head=temp;

    }
    else
    {
     temp1=head;

     for (int i=1;i<position-1;i++)
     {
        if(temp==NULL)
        {
            return;
        }
        temp1=temp1->next;
     }
     temp->next=temp1->next;
     temp1->next=temp;
    }
}
void delete_from_beg()
{
    //struct node* temp;

    if (head==NULL)
    {
        printf("List is Empty\n");

    }
    else
    {
     temp=head;
     head=temp->next;
     free(temp);
    }
}

void delete_from_end()
{
    //struct node* temp,*temp1;

    if(head==NULL)
    {
        printf("List is Empty\n");

    }
    else if(head->next==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
    
    temp=head;

    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=NULL;
    free(temp);
    }
}
void delete_from_nth_position(int position)
{
    //struct node*temp,*temp1;
    if(head==NULL)
    {
        printf("Listr is Empty\n");


    }
    else if (position == 1) 
    {
        temp = head;
        head = temp->next;
        free(temp);
    } 
    else 
    {
        temp = head;
        for (int i = 1; i < position - 1; i++) 
        {
            if (temp == NULL || temp->next == NULL) return;
            temp = temp->next;
        }
        temp1 = temp->next;
        temp->next = temp1->next;
        free(temp1);
    }
}
void display()
{
    //struct node* temp;
    if(head==NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
             printf("|%p|%d|%p|-->",temp,temp->data,temp->next);
            temp=temp->next;
        }
        printf("\n");

    }
}

void search(int element)
{
    //struct node* temp;
    if(head==NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
           if(element==temp->data)
           {
               printf("Element is Found\n");
               break;
           }
           else
           {
               printf("Element is not found\n");
               temp=temp->next;
               break;
               
           }
           
        }
        printf("\n");

    }
}

void main()
{
    int choice,element,position,elem;
    printf("_____SINGLY LINKED LIST_____\n");
    do
    {
    printf("1.Insert at Begning\n");
    printf("2.Insert at End\n");
    printf("3.Insert at nth Position\n");
    printf("4.Delete from Begning\n");
    printf("5.Delete from End\n");
    printf("6.Delete from nth Position\n");
    printf("7.Search\n");
    printf("8.Display\n");
    printf("9.Exit\n");

    printf("Enter Your Choice\n");
    scanf("%d",&choice);

    
    switch(choice)
    {
        case 1:
        printf("Enter the Element to be Insert at Begning\n");
        scanf("%d",&element);
        insert_at_beg(element);
        break;

        case 2:
        printf("Enter the Element to be Insert at End\n");
        scanf("%d",&element);
        insert_at_end(element);
        break;

        case 3:
        printf("Enter the Element to be Insert at Position\n");
        scanf("%d",&element);
        printf("Enter the Position\n");
        scanf("%d",&position);
        insert_at_nth_position(element,position);
        break;

        case 4:
        delete_from_beg();
        break;

        case 5:
        delete_from_end();
        break;

        case 6:
        printf("Enter the Position to be Delete\n");
        scanf("%d",&position);
        delete_from_nth_position(position);
        break;
        
        case 7: printf("Enter the Element to be Search\n");
        scanf("%d",&elem);
        search(elem);
        break;

        case 8:
        display();
        break;

        case 9:
        printf("Exit\n");
        break;

        default :
        printf("Invalid Choice\n");
        
    }
    }while(choice<=8);

}  
//output// 
/*
PS C:\Users\nikhi\OneDrive\Desktop\My C Programing> cd "c:\Users\nikhi\OneDrive\Desktop\My C Programing\" ; if ($?) { gcc singly_linked_list_two.c -o singly_linked_list_two } ; if ($?) { .\singly_linked_list_two }
_____SINGLY LINKED LIST_____
1.Insert at Begning
2.Insert at End
3.Insert at nth Position
4.Delete from Begning
5.Delete from End
6.Delete from nth Position
7.Search
8.Display
9.Exit
Enter Your Choice
1
Enter the Element to be Insert at Begning
12
1.Insert at Begning
2.Insert at End
3.Insert at nth Position
4.Delete from Begning
5.Delete from End
6.Delete from nth Position
7.Search
8.Display
9.Exit
Enter Your Choice
1
Enter the Element to be Insert at Begning
15
1.Insert at Begning
2.Insert at End
3.Insert at nth Position
4.Delete from Begning
5.Delete from End
6.Delete from nth Position
7.Search
8.Display
9.Exit
Enter Your Choice
2
Enter the Element to be Insert at End
57
1.Insert at Begning
2.Insert at End
3.Insert at nth Position
4.Delete from Begning
5.Delete from End
6.Delete from nth Position
7.Search
8.Display
9.Exit
Enter Your Choice
3
Enter the Element to be Insert at Position
500
Enter the Position
2
1.Insert at Begning
2.Insert at End
3.Insert at nth Position
4.Delete from Begning
5.Delete from End
6.Delete from nth Position
7.Search
8.Display
9.Exit
Enter Your Choice
8
|00CF1688|15|00CF16A8|-->|00CF16A8|500|00CF1678|-->|00CF1678|12|00CF1698|-->|00CF1698|57|00000000|-->
1.Insert at Begning
2.Insert at End
3.Insert at nth Position
4.Delete from Begning
5.Delete from End
6.Delete from nth Position
7.Search
8.Display
9.Exit
Enter Your Choice
4
1.Insert at Begning
2.Insert at End
3.Insert at nth Position
4.Delete from Begning
5.Delete from End
6.Delete from nth Position
7.Search
8.Display
9.Exit
Enter Your Choice
5
1.Insert at Begning
2.Insert at End
3.Insert at nth Position
4.Delete from Begning
5.Delete from End
6.Delete from nth Position
7.Search
8.Display
9.Exit
Enter Your Choice
8
|00CF16A8|500|00CF1678|-->|00CF1678|12|00000000|-->
1.Insert at Begning
2.Insert at End
3.Insert at nth Position
4.Delete from Begning
5.Delete from End
6.Delete from nth Position
7.Search
8.Display
9.Exit
Enter Your Choice
1
Enter the Element to be Insert at Begning
798
1.Insert at Begning
2.Insert at End
3.Insert at nth Position
4.Delete from Begning
5.Delete from End
6.Delete from nth Position
7.Search
8.Display
9.Exit
Enter Your Choice
2
Enter the Element to be Insert at End
56  
1.Insert at Begning
2.Insert at End
3.Insert at nth Position
4.Delete from Begning
5.Delete from End
6.Delete from nth Position
7.Search
8.Display
9.Exit
Enter Your Choice
6
Enter the Position to be Delete
3
1.Insert at Begning
2.Insert at End
3.Insert at nth Position
4.Delete from Begning
5.Delete from End
6.Delete from nth Position
7.Search
8.Display
9.Exit
Enter Your Choice
8
|00CF1688|798|00CF16A8|-->|00CF16A8|500|00CF1698|-->|00CF1698|56|00000000|-->
1.Insert at Begning
2.Insert at End
3.Insert at nth Position
4.Delete from Begning
5.Delete from End
6.Delete from nth Position
7.Search
8.Display
9.Exit
Enter Your Choice
7
Enter the Element to be Search
500
Element is found

1.Insert at Begning
2.Insert at End
3.Insert at nth Position
4.Delete from Begning
5.Delete from End
6.Delete from nth Position
7.Search
8.Display
9.Exit
Enter Your Choice
7
Enter the Element to be Search
890
Element is not found

1.Insert at Begning
2.Insert at End
3.Insert at nth Position
4.Delete from Begning
5.Delete from End
6.Delete from nth Position
7.Search
8.Display
9.Exit
Enter Your Choice
9
Exit
PS C:\Users\nikhi\OneDrive\Desktop\My C Programing> 
*/ 