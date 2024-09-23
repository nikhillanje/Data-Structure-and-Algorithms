







Name-Nikhil Lanje
Class SY-1 
Batch-1
Roll No-113
Subject-Data Structure

#include<stdio.h>
int a[100], size;
void insert_at_position()
{
int item,position,i;

 printf("Enter the Element to be Insert\n");
            scanf("%d", &item);

            printf("Enter the Position to be Insert\n");
            scanf("%d", &position);

            if (position<=size)
            {

            for (i = size; i >= position; i--)
            {
                a[i] = a[i - 1];
            }
            a[position - 1] = item;
            size++;

            printf("Result Array Is\n");
            for (i = 0; i < size; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
            }
            else
            {
             printf("Invalid Position");
             }
}

void delete_from_position()
{
int position,i;
printf("Enter the location where you wish to delete element\n");
            scanf("%d", &position);

            if (position >=size)
            {
                printf("Deletion not Possible.\n");
            }
            else
            {
                for (i = position - 1; i < size - 1; i++)
                {
                    a[i] = a[i + 1];
                }
                size--;

                printf("Resultant array is\n");
                for (i = 0; i < size; i++)
                {
                    printf("%d\n", a[i]);
                }
            }
}

void insert_at_end()
{
int item,i;
printf("Enter the element to insert at the end: ");
            scanf("%d", &item);

            a[size] = item;
            size++;

            printf("The updated array is: ");
            for (i = 0; i < size; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
            
}

void delete_from_end()
{
int i;
printf("Array before deletion: ");
            for (i = 0; i < size; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");

            size--;

            printf("Array after deletion: ");
            for (i = 0; i < size; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
}

void search_element_from_array()
{
int item,i,flag=0;
printf("Enter the element to search: ");
            scanf("%d", &item);

            for (i = 0; i < size; i++)

            {
                if (a[i] == item)
                {
                    printf("Element found at position: %d\n", i+1);
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
            {
                printf("Element not found in the array.\n");
            }
}


void main()
{ 
     int choice,i;
    
     printf("Enter the Size of the Array\n");
            scanf("%d", &size);
            printf("ENTER THE %d ELEMENTS\n", size);

            for (i = 0; i < size; i++)
            {
                scanf("%d", &a[i]);
            }
do
{

    printf("ENTER YOUR CHOICE 1-5\n");
    printf("1. INSERT ELEMENT AT nth POSITION\n");
    printf("2. DELETE ELEMENT FROM nth POSITION\n");
    printf("3. INSERT AT END POSITION\n");
    printf("4. DELETE FROM END POSITION\n");
    printf("5. SEARCH ELEMENT FROM ARRAY\n");

    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            insert_at_position();
            break;

        case 2:
            delete_from_position();
            
            break;

        case 3:
            insert_at_end();
            break;

        case 4:
           delete_from_end();
           break;

        case 5:
           search_element_from_array();
           break;

        default:
            printf("Invalid choice.\n");
    }
}while(choice<=5);
}



/*
Enter the Size of the Array
10
ENTER THE 10 ELEMENTS
0
9
8
7
6
5
4
3
2
1

ENTER YOUR CHOICE 1-5

1. INSERT ELEMENT AT nth POSITION
2. DELETE ELEMENT FROM nth POSITION
3. INSERT AT END POSITION
4. DELETE FROM END POSITION
5. SEARCH ELEMENT FROM ARRAY

1

Enter the Element to be Insert
10000
Enter the Position to be Insert
3
Result Array Is
0 9 10000 8 7 6 5 4 3 2 1 

ENTER YOUR CHOICE 1-5
1. INSERT ELEMENT AT nth POSITION
2. DELETE ELEMENT FROM nth POSITION
3. INSERT AT END POSITION
4. DELETE FROM END POSITION
5. SEARCH ELEMENT FROM ARRAY

1

Enter the Element to be Insert
12345
Enter the Position to be Insert
15
Invalid PositionENTER YOUR CHOICE 1-5

1. INSERT ELEMENT AT nth POSITION
2. DELETE ELEMENT FROM nth POSITION
3. INSERT AT END POSITION
4. DELETE FROM END POSITION
5. SEARCH ELEMENT FROM ARRAY

2

Enter the location where you wish to delete element
3
Resultant array is
0
9
8
7
6
5
4
3
2
1

ENTER YOUR CHOICE 1-5
1. INSERT ELEMENT AT nth POSITION
2. DELETE ELEMENT FROM nth POSITION
3. INSERT AT END POSITION
4. DELETE FROM END POSITION
5. SEARCH ELEMENT FROM ARRAY

2

Enter the location where you wish to delete element
15
Deletion not Possible.

ENTER YOUR CHOICE 1-5
1. INSERT ELEMENT AT nth POSITION
2. DELETE ELEMENT FROM nth POSITION
3. INSERT AT END POSITION
4. DELETE FROM END POSITION
5. SEARCH ELEMENT FROM ARRAY

3

Enter the element to insert at the end: 199
The updated array is: 0 9 8 7 6 5 4 3 2 1 199 
ENTER YOUR CHOICE 1-5
1. INSERT ELEMENT AT nth POSITION
2. DELETE ELEMENT FROM nth POSITION
3. INSERT AT END POSITION
4. DELETE FROM END POSITION
5. SEARCH ELEMENT FROM ARRAY

3

Enter the element to insert at the end: 1678
The updated array is: 0 9 8 7 6 5 4 3 2 1 199 1678 

ENTER YOUR CHOICE 1-5
1. INSERT ELEMENT AT nth POSITION
2. DELETE ELEMENT FROM nth POSITION
3. INSERT AT END POSITION
4. DELETE FROM END POSITION
5. SEARCH ELEMENT FROM ARRAY

3

Enter the element to insert at the end: 3456
The updated array is: 0 9 8 7 6 5 4 3 2 1 199 1678 3456 
ENTER YOUR CHOICE 1-5

1. INSERT ELEMENT AT nth POSITION
2. DELETE ELEMENT FROM nth POSITION
3. INSERT AT END POSITION
4. DELETE FROM END POSITION
5. SEARCH ELEMENT FROM ARRAY

4

Array before deletion: 0 9 8 7 6 5 4 3 2 1 199 1678 3456 
Array after deletion: 0 9 8 7 6 5 4 3 2 1 199 1678 

ENTER YOUR CHOICE 1-5
1. INSERT ELEMENT AT nth POSITION
2. DELETE ELEMENT FROM nth POSITION
3. INSERT AT END POSITION
4. DELETE FROM END POSITION
5. SEARCH ELEMENT FROM ARRAY

5

Enter the element to search: 199
Element found at position: 11

ENTER YOUR CHOICE 1-5
1. INSERT ELEMENT AT nth POSITION
2. DELETE ELEMENT FROM nth POSITION
3. INSERT AT END POSITION
4. DELETE FROM END POSITION
5. SEARCH ELEMENT FROM ARRAY

5

Enter the element to search: 15
Element not found in the array.

ENTER YOUR CHOICE 1-5
1. INSERT ELEMENT AT nth POSITION
2. DELETE ELEMENT FROM nth POSITION
3. INSERT AT END POSITION
4. DELETE FROM END POSITION
5. SEARCH ELEMENT FROM ARRAY

6

Invalid choice.

*/






