//write a code to take input of a 2d array in the form of temperature and city and 
//print them out
#include<stdio.h>
int main()
{
    const int cities=2, week=7;
    int temp[50][50];
    char city[100];
    for(int i=0;i<cities;i++)
    {
        printf("For city %d:-\n",i+1);
        for(int j=0;j<week;j++)
        {
            printf("Enter the temperature on day %d:",j+1);
            scanf("%d",&temp[i][j]);
        }
    }
    for(int i=0;i<cities;i++)
    {
        printf("For city %d:\n",i+1);
        for(int j=0;j<week;j++)
        {
            printf("Temperature on day %d is %d\n",j+1,temp[i][j]);
        }
    }
}