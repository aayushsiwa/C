//wap to create basic calculator using switch case
#include<stdio.h>
int main()
{
    char op;
    int first , second, ans;
    printf("Enter the operator(+,-,*,/<%%)\n:");
    scanf("%c",&op);
    printf("Enter the two operands\n:");
    scanf("%d %d",&first, &second);
    switch(op)
    {
        case('+'):
        {
            ans=first+second;
            printf("%d %c %d = %d",first,op,second,ans);
            break;
        }
        case('-'):
        {
            ans=first-second;
            printf("%d %c %d = %d",first,op,second,ans);
            break;
        }
        case('*'):
        {
            ans=first*second;
            printf("%d %c %d = %d",first,op,second,ans);
            break;
        }
        case('/'):
        {
            ans=first/second;
            printf("%d %c %d = %d",first,op,second,ans);
            break;
        }
        case('%'):
        {
            ans=first%second;
            printf("%d %c %d = %d",first,op,second,ans);
            break;
        }
        default:
        {
            printf("Try again");
            break;
        }
    }   
}