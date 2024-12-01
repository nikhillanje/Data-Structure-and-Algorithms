/*
Name:- Nikhil Lanje
Class SY-1
Roll No-113
Subject:- DS
*/

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void insert_at_beg(int element) 
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = element;
    temp->prev = NULL;
    temp->next = head;
    if (head != NULL) 
    {
        head->prev = temp;
    }
    head = temp;
}

void insert_at_end(int element) 
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = element;
    temp->next = NULL;

    if (head == NULL) 
    {
        temp->prev = NULL;
        head = temp;
    } 
    else 
    {
        struct node *temp1 = head;
        while (temp1->next != NULL) 
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
        temp->prev = temp1;
    }
}

void insert_at_nth_position(int element, int position) 
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = element;

    if (position == 1) 
    {
        temp->prev = NULL;
        temp->next = head;
        if (head != NULL) 
        {
            head->prev = temp;
        }
        head = temp;
    } 
    else 
    {
        struct node *temp1 = head;
        for (int i = 1; i < position - 1 && temp1 != NULL; i++) 
        {
            temp1 = temp1->next;
        }
        if (temp1 == NULL) 
        {
            printf("Position out of range\n");
            free(temp);
            return;
        }
        temp->next = temp1->next;
        temp->prev = temp1;
        if (temp1->next != NULL) 
        {
            temp1->next->prev = temp;
        }
        temp1->next = temp;
    }
}

void delete_from_beg() 
{
    if (head == NULL) 
    {
        printf("List is Empty\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    if (head != NULL) 
    {
        head->prev = NULL;
    }
    free(temp);
    printf("Node deleted successfully\n");
}

void delete_from_end() 
{
    if (head == NULL) 
    {
        printf("List is Empty\n");
        return;
    }
    struct node *temp = head;
    if (temp->next == NULL) 
    {
        head = NULL;
        free(temp);
        return;
    }
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
    printf("Node deleted successfully\n");
}

void delete_from_nth_position(int position) 
{
    if (head == NULL) 
    {
        printf("List is Empty\n");
        return;
    }
    struct node *temp = head;
    if (position == 1) 
    {
        head = head->next;
        if (head != NULL) 
        {
            head->prev = NULL;
        }
        free(temp);
        return;
    }
    for (int i = 1; i < position && temp != NULL; i++) 
    {
        temp = temp->next;
    }
    if (temp == NULL) 
    {
        printf("Position out of range\n");
        return;
    }
    if (temp->next != NULL) 
    {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != NULL) 
    {
        temp->prev->next = temp->next;
    }
    free(temp);
    printf("Node deleted successfully\n");
}

void display() 
{
    if (head == NULL) 
    {
        printf("List is Empty\n");
        return;
    }
    struct node *temp = head;
    while (temp != NULL) {
        printf("|%p|%d|%p| ", temp, temp->data, temp->next);
        temp = temp->next;
    }
    printf("\n");
}

void search(int element) 
{
    if (head == NULL) {
        printf("List is Empty\n");
        return;
    }
    struct node *temp = head;
    int position = 1;
    while (temp != NULL) 
    {
        if (temp->data == element) 
        {
            printf("Element found at position %d\n", position);
            return;
        }
        temp = temp->next;
        position++;
    }
    printf("Element not found in the list\n");
}

void main() 
{
    int choice, element, position;
    printf("_____DOUBLY LINKED LIST_____\n");
    do {
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at nth Position\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete from nth Position\n");
        printf("7. Search\n");
        printf("8. Display\n");
        printf("9. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the Element to Insert at Beginning: ");
                scanf("%d", &element);
                insert_at_beg(element);
                break;
            case 2:
                printf("Enter the Element to Insert at End: ");
                scanf("%d", &element);
                insert_at_end(element);
                break;
            case 3:
                printf("Enter the Element to Insert: ");
                scanf("%d", &element);
                printf("Enter the Position: ");
                scanf("%d", &position);
                insert_at_nth_position(element, position);
                break;
            case 4:
                delete_from_beg();
                break;
            case 5:
                delete_from_end();
                break;
            case 6:
                printf("Enter the Position to Delete: ");
                scanf("%d", &position);
                delete_from_nth_position(position);
                break;
            case 7:
                printf("Enter the Element to Search: ");
                scanf("%d", &element);
                search(element);
                break;
            case 8:
                display();
                break;
            case 9:
                printf("Exit\n");
                break;
            default:
                printf("Invalid Choice\n");
        }
    } while (choice != 9);

}
//output//
/*
PS C:\Users\nikhi\OneDrive\Desktop\My C Programing> cd "c:\Users\nikhi\OneDrive\Desktop\My C Programing\" ; if ($?) { gcc doubly_linked_list.c -o doubly_linked_list } ; if ($?) { .\doubly_linked_list }
_____DOUBLY LINKED LIST_____
1. Insert at Beginning
2. Insert at End
3. Insert at nth Position
4. Delete from Beginning
5. Delete from End
6. Delete from nth Position
7. Search
8. Display
9. Exit
Enter Your Choice: 1
Enter the Element to Insert at Beginning: 122
1. Insert at Beginning
2. Insert at End
3. Insert at nth Position
4. Delete from Beginning
5. Delete from End
6. Delete from nth Position
7. Search
8. Display
9. Exit
Enter Your Choice: 1
Enter the Element to Insert at Beginning: 1345
1. Insert at Beginning
2. Insert at End
3. Insert at nth Position
4. Delete from Beginning
5. Delete from End
6. Delete from nth Position
7. Search
8. Display
9. Exit
Enter Your Choice: 1
Enter the Element to Insert at Beginning: 32
1. Insert at Beginning
2. Insert at End
3. Insert at nth Position
4. Delete from Beginning
5. Delete from End
6. Delete from nth Position
7. Search
8. Display
9. Exit
Enter Your Choice: 2
Enter the Element to Insert at End: 567
1. Insert at Beginning
2. Insert at End
3. Insert at nth Position
4. Delete from Beginning
5. Delete from End
6. Delete from nth Position
7. Search
8. Display
9. Exit
Enter Your Choice: 8
|00CE2450|32|00CE1690| |00CE1690|1345|00CE1678| |00CE1678|122|00CE2468| |00CE2468|567|00000000|

1. Insert at Beginning
2. Insert at End
3. Insert at nth Position
4. Delete from Beginning
5. Delete from End
6. Delete from nth Position
7. Search
8. Display
9. Exit
Enter Your Choice: 3
Enter the Element to Insert: 56
Enter the Position: 3
1. Insert at Beginning
2. Insert at End
3. Insert at nth Position
4. Delete from Beginning
5. Delete from End
6. Delete from nth Position
7. Search
8. Display
9. Exit
Enter Your Choice: 8
|00CE2450|32|00CE1690| |00CE1690|1345|00CE2480| |00CE2480|56|00CE1678| |00CE1678|122|00CE2468| |00CE2468|567|00000000|
1. Insert at Beginning
2. Insert at End
3. Insert at nth Position
4. Delete from Beginning
5. Delete from End
6. Delete from nth Position
7. Search
8. Display
9. Exit
Enter Your Choice: 4
Node deleted successfully
1. Insert at Beginning
2. Insert at End
3. Insert at nth Position
4. Delete from Beginning
5. Delete from End
6. Delete from nth Position
7. Search
8. Display
9. Exit
Enter Your Choice: 5
Node deleted successfully
1. Insert at Beginning
2. Insert at End
3. Insert at nth Position
4. Delete from Beginning
5. Delete from End
6. Delete from nth Position
7. Search
8. Display
9. Exit
Enter Your Choice: 6
Enter the Position to Delete: 2
Node deleted successfully
1. Insert at Beginning
2. Insert at End
3. Insert at nth Position
4. Delete from Beginning
5. Delete from End
6. Delete from nth Position
7. Search
8. Display
9. Exit
Enter Your Choice: 8
|00CE1690|1345|00CE1678| |00CE1678|122|00000000|
1. Insert at Beginning
2. Insert at End
3. Insert at nth Position
4. Delete from Beginning
5. Delete from End
6. Delete from nth Position
7. Search
8. Display
9. Exit
Enter Your Choice: 7
Enter the Element to Search: 122
Element found at position 2
1. Insert at Beginning
2. Insert at End
3. Insert at nth Position
4. Delete from Beginning
5. Delete from End
6. Delete from nth Position
7. Search
8. Display
9. Exit
Enter Your Choice: 9
Exit
PS C:\Users\nikhi\OneDrive\Desktop\My C Programing>
*/