/*
Name: Nikhil Lanje
Class:SY-1
Roll No:113
Subject: Data Structure
*/
#include<stdio.h>

#define hashtablesize 10

int hashtable[hashtablesize];
int flag[hashtablesize];

void table()
{
    for(int i=0; i<=hashtablesize; i++)
    {
      hashtable[i]=-1;
      flag[i]=0;
    }
}


void display()
{
    for(int i=0; i<hashtablesize; i++)
    {
        printf("\nIndex %d:", i);
        if(flag[i]==0)
        {
            printf("NULL");
        }
        else
        {
          printf("%d",hashtable[i]);

        }


    }
}

void linear(int key)
{
    int i, index = key % hashtablesize;
    
    for (i = 0; i < hashtablesize; i++)
    {
        int probeIndex = (index + i) % hashtablesize;
        if (flag[probeIndex] == 0) 
        {
            hashtable[probeIndex] = key;
            flag[probeIndex] = 1;
            break;
        }
    }
    if (i == hashtablesize) 
    {
        printf("\nHash table is full, cannot insert %d\n", key);
    }
}


void quadratic(int key)
{
    int i, index = key % hashtablesize;
    for (i = 0; i < hashtablesize; i++) 
    {
        int probeIndex = (index + i * i) % hashtablesize;
        if (flag[probeIndex] == 0) 
        {
            hashtable[probeIndex] = key;
            flag[probeIndex] = 1;
            break;
        }
    }
    if (i == hashtablesize) 
    {
        printf("\nHash table is full, cannot insert %d\n", key);
    }
}
int hash2(int key) 
{
    return 8 - (key % 10);
}

void double_hashing(int key)
{
    int i, index = key % hashtablesize;
    int stepSize = hash2(key);
    for (i = 0; i < hashtablesize; i++) 
    {
        int probeIndex = (index + i * stepSize) % hashtablesize;
        if (flag[probeIndex] == 0) 
        {
            hashtable[probeIndex] = key;
            flag[probeIndex] = 1;
            break;
        }
    }
    if (i == hashtablesize) 
    {
        printf("\nHash table is full, cannot insert %d\n", key);
    }
}

void main()
{
    table();
    while(1)
    {
    int choice,key,valid;

    printf("\nEnter the value to insert into the hash table:\n");
    scanf("%d", &key);
    printf("\nENTER YOUR CHOICE FROM 1-3\n");
    printf("\n1.LINEAR\n");
    printf("\n2.QUADRATIC\n");
    printf("\n3.DOUBLE\n");
    printf("\n");

    
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        linear(key);
        display();
        break;

        case 2:
        quadratic(key);
        display();
        break;

        case 3:
        double_hashing(key);
        display();
        break;

        default:
        printf("\nPLEASE ENTER THE VALID CHOICE\n");
        break;

    }

    }


}

//output//
/*Enter the value to insert into the hash table:
45

ENTER YOUR CHOICE FROM 1-3

1.LINEAR

2.QUADRATIC

3.DOUBLE

1

Index 0:NULL
Index 1:NULL
Index 2:NULL
Index 3:NULL
Index 4:NULL
Index 5:45
Index 6:NULL
Index 7:NULL
Index 8:NULL
Index 9:NULL
Enter the value to insert into the hash table:
78

ENTER YOUR CHOICE FROM 1-3

1.LINEAR

2.QUADRATIC

3.DOUBLE

2

Index 0:NULL
Index 1:NULL
Index 2:NULL
Index 3:NULL
Index 4:NULL
Index 5:45
Index 6:NULL
Index 7:NULL
Index 8:78
Index 9:NULL
Enter the value to insert into the hash table:
55   

ENTER YOUR CHOICE FROM 1-3

1.LINEAR

2.QUADRATIC

3.DOUBLE

3

Index 0:NULL
Index 1:55
Index 2:NULL
Index 3:NULL
Index 4:NULL
Index 5:45
Index 6:NULL
Index 7:NULL
Index 8:78
Index 9:NULL
Enter the value to insert into the hash table:
23

ENTER YOUR CHOICE FROM 1-3

1.LINEAR

2.QUADRATIC

3.DOUBLE

4

PLEASE ENTER THE VALID CHOICE

Enter the value to insert into the hash table:

*/
