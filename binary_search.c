#include<stdio.h>
void binarysearch(int a[],int size,int x)
{
    int mid;
    int low=0;
    int high=size-1;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(x==a[mid])
        {
            printf("Element is Found at position %d\n",x);
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

    if(x!=a[mid])
    {
     printf("Element is Not Found\n");
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