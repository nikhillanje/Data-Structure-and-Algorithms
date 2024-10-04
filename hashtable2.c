#include <stdio.h>
#include <stdlib.h>

#define tablesize 10

struct node 
{
    int data;
    struct node *next;
};

struct node *chainingHead[tablesize] = {NULL}, *c;

int HashTable[tablesize];
int Flag[tablesize];

void display() 
{
    int i;
    for (i = 0; i < tablesize; i++) 
    {
        printf("\nIndex %d:", i);
        if (Flag[i] == 0) 
        {
            printf(" -> NULL");
        } 
        else if (chainingHead[i] != NULL) 
        {
            for (c = chainingHead[i]; c != NULL; c = c->next) 
            {
                printf(" -> %d", c->data);
            }
        } 
        else 
        {
            printf(" -> %d", HashTable[i]);
        }
    }
}

void insert_using_chaining(int key)
{
    int i = key % tablesize;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = key;
    newnode->next = NULL;
    if (chainingHead[i] == NULL) 
    {
        chainingHead[i] = newnode;
    } 
    else 
    {
        c = chainingHead[i];
        while (c->next != NULL) 
        {
            c = c->next;
        }
        c->next = newnode;
    }
    Flag[i] = 1;  // Mark this index as filled
}

void insert_using_linear_probing(int key) 
{
    int i, index = key % tablesize;
    for (i = 0; i < tablesize; i++) 
    {
        int probeIndex = (index + i) % tablesize;
        if (Flag[probeIndex] == 0) 
        {
            HashTable[probeIndex] = key;
            Flag[probeIndex] = 1;
            break;
        }
    }
    if (i == tablesize) 
    {
        printf("Hash table is full, cannot insert %d\n", key);
    }
}

void insert_using_quadratic_probing(int key) 
{
    int i, index = key % tablesize;
    for (i = 0; i < tablesize; i++) 
    {
        int probeIndex = (index + i * i) % tablesize;
        if (Flag[probeIndex] == 0) 
        {
            HashTable[probeIndex] = key;
            Flag[probeIndex] = 1;
            break;
        }
    }
    if (i == tablesize) 
    {
        printf("Hash table is full, cannot insert %d\n", key);
    }
}

int hash2(int key) 
{
    return 7 - (key % 7);
}

void insert_using_double_hashing(int key) 
{
    int i, index = key % tablesize;
    int stepSize = hash2(key);
    for (i = 0; i < tablesize; i++) 
    {
        int probeIndex = (index + i * stepSize) % tablesize;
        if (Flag[probeIndex] == 0) 
        {
            HashTable[probeIndex] = key;
            Flag[probeIndex] = 1;
            break;
        }
    }
    if (i == tablesize) 
    {
        printf("Hash table is full, cannot insert %d\n", key);
    }
}

void initializeTable() 
{
    for (int i = 0; i < tablesize; i++) 
    {
        Flag[i] = 0;
        HashTable[i] = -1;
        chainingHead[i] = NULL;
    }
}

void main()
{
    initializeTable();  // Initialize the table before use
    while(1)
    {
        int choice, key;

        printf("\nEnter the value to insert into the hash table:\n");
        scanf("%d", &key);

        printf("\nENTER YOUR CHOICE FROM 1 TO 4\n");
        printf("1. CHAINING METHOD\n");
        printf("2. LINEAR PROBING\n");
        printf("3. QUADRATIC PROBING\n");
        printf("4. DOUBLE HASHING\n");

        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                insert_using_chaining(key);
                break;

            case 2:
                insert_using_linear_probing(key);
                break;

            case 3:
                insert_using_quadratic_probing(key);
                break;

            case 4:
                insert_using_double_hashing(key);
                break;

            default:
                printf("INVALID CHOICE");
                break;
        }    
        display();
    }
}
