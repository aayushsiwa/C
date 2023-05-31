//wap to store n number of books data such as title, author name, publisher, price, etc.
//using structure and dynamic memory allocation. Display all the book info of a particular author.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct books
{
    char title[100];
    char author[100];
    char pub[100];
    int price[100];
};
int spec(char aname[100],int n,struct books *b)
{
    for(int i=0;i<n;i++)
    {
        if (strcmp(aname,b[i].author)==0)
        {
            printf("\n\nTitle : %s",b[i].title);
        }
    }
}
int main()
{
    int n,i;
    char aname[100];
    struct books *b=(struct books *)malloc(n*sizeof(struct books));
    printf("Enter the number of books:");
    scanf("%d",&n);
    printf("\nEnter the title,author,publisher,price of books:");
    for(i=0;i<n;i++)
    {
        printf("\nBook%d",i+1);
        printf("\nTitle : ");
        scanf("%s",b[i].title);
        printf("\nAuthor : ");
        scanf("%s",b[i].author);
        printf("\nPublisher : ");
        scanf("%s",b[i].pub);
        printf("\nPrice : ");
        scanf("%d",&b[i].price);
    }
    printf("Enter the name of the author:");
    scanf("%s",aname);
    spec(aname,n,b);
}