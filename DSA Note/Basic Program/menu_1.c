#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    printf("          Menu          ");
    printf("\n ______________________\n");
    printf("\nChoose 1-4 for operation and 5 for exit");


    void input()
    {
        printf("\nEnter Two Number : ");
    }

    void add()
    {
        input();
        int a,b,sum;
        scanf("%d %d",&a,&b);
        sum = a+b;
        printf("\nSum of Two number is %d\n",sum);
    }
    void sub()
    {
        input();
        int a,b,sub;
        scanf("%d %d",&a,&b);
        sub = a-b;
        printf("\nSubtract of Two number is %d\n",sub);
    }
    void mul()
    {
        input();
        int a,b,mul;
        scanf("%d %d",&a,&b);
        mul = a*b;
        printf("\nmultiplication of Two number is %d\n",mul);
    }
    void div()
    {
        input();
        int a,b;
        float div;
        scanf("%d %d",&a,&b);
        div =  a/b;
        printf("\nDivision of Two number is %.2f\n",div);
    }

   int ch;
    do
    {

    printf("\nEnter your choice : ");
    scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            add();
            break;

        case 2:
            sub();
            break;

        case 3:
            mul();
            break;

        case 4:
            div();
            break;

        case 5:
            printf("\n Exit from program \n");
            break;

        default:
            printf("\nWrong Input , Try Again !!! ");

        }

    }
    while(ch != 5);

    return 0;
}
