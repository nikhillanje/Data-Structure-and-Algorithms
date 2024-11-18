/*
Name-Nikhil Lanje
Class SY-1 
Batch-1
Roll No-113
Subject-Data Structure
*/
#include<stdio.h>
void binarysearch(int a[],int size,int x)
{
    int mid;
    int low=0;
    int high=size-1;
    int flag=0;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(x==a[mid])
        {
            printf("Element is Found at position %d\n",x);
            flag=1;
            break;
        }
        else if (x<a[mid])
        {
            high=mid-1;
        }
        else if(x>a[mid])
        {
            low=mid+1;

        }
        else
        {
        printf("Element is Not Found\n");
        break ;
        }


    }

    if(flag==0)
    {
     printf("Element is Not Found in an Array\n");
    }
  
}
void main()
{
    int size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    int a[size];
    printf("enter the %d elements of sorted array in Assending Order\n",size);

    for (int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int n;
    printf("enter the number to search\n");
    scanf("%d",&n);
    binarysearch(a,size,n);
}
//output//
/*
PS C:\Users\nikhi\OneDrive\Desktop\My C Programing> cd "c:\Users\nikhi\OneDrive\Desktop\My C Programing\" ; if ($?) { gcc binary_search.c -o binary_search } ; if ($?) { .\binary_search }
enter the size of the array
5
enter the 5 elements of sorted array in Assending Order
1
2
3
4
5
enter the number to search
4
Element is Found at position 4
PS C:\Users\nikhi\OneDrive\Desktop\My C Programing> cd "c:\Users\nikhi\OneDrive\Desktop\My C Programing\" ; if ($?) { gcc binary_search.c -o binary_search } ; if ($?) { .\binary_search }
enter the size of the array
5
enter the 5 elements of sorted array in Assending Order
1
2
3
4
5
enter the number to search
6
Element is Not Found in an Array
PS C:\Users\nikhi\OneDrive\Desktop\My C Programing>
*/