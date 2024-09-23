#include <stdio.h>
int calculaor();

void main()
{
 calculator();
}
int calculator()
{
    int a,b,choice;

    printf("enter the two numbers\n");
    scanf("%d%d",&a,&b);

    printf("Enter your choice\n");

    printf("\n1.ADDITION\n");
    printf("2.SUBSTRACT\n");
    printf("3.MULTIPLY\n");
    printf("4.DIVISION\n");

    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("\n%d",a+b);
        break;

        case 2:
        printf("\n%d",a-b);
        break;

        case 3:
        printf("\n%d",a*b);
        break;

        case 4:
        if (b!=0)
        {
            printf("\n%d", a/b);

        }
        else
        {
            printf("\nINVALID");
        }
        default:
        printf("\nINVALID CHOICE");



    }
}