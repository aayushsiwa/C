//wap to read item details used in a party and calculate all expenses,
//divide expenses in all friends eqaully.
#include<stdio.h>
struct prices
{
    int v;
    int w;
    int soda;
    int chips;
    int snacks;
};
struct party_items
{
    int v;
    int w;
    int soda;
    int chips;
    int snacks;
};
int sum(struct party_items b1,struct prices b2)
{
    int total=0;
    int x1=b1.chips,y1=b2.chips;
    int x2=b1.snacks,y2=b2.snacks;
    int x3=b1.soda,y3=b2.soda;
    int x4=b1.v,y4=b2.v;
    int x5=b1.w,y5=b2.w;
    total = x1*y1 + x2*y2 + x3*y3 + x4*y4 + x5*y5;
    return total;
}

int main()
{
    int n;
    struct party_items b1;
    struct prices b2;
    printf("Enter the quantities of the items used:\n");
    printf("V - ");
    scanf("%d",&b1.v);
    printf("W - ");
    scanf("%d",&b1.w);
    printf("Soda - ");
    scanf("%d",&b1.soda);
    printf("Chips - ");
    scanf("%d",&b1.chips);
    printf("Snacks - ");
    scanf("%d",&b1.snacks);
    printf("Now, Enter the prices of the items:\n");
    printf("V - ");
    scanf("%d",&b2.v);
    printf("W - ");
    scanf("%d",&b2.w);
    printf("Soda - ");
    scanf("%d",&b2.soda);
    printf("Chips - ");
    scanf("%d",&b2.chips);
    printf("Snacks - ");
    scanf("%d",&b2.snacks);
    printf("--------------------------------------------------");
    printf("\nTotal - %d\n",sum(b1,b2));
    printf("Enter number of people:");
    scanf("%d",&n);
    printf("Amount to be paid per person is %d",sum(b1,b2)/n);
}