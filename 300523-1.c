//wap to create a structure that stores student info like name, roll no., gender, d.o.b. 
//using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
struct stu_details
{
    char name[100];
    int roll;
    char gender[10];
    char dob[10];
};
int main()
{
    int n;
    printf("Details of how many students do you want to enter:");
    scanf("%d",&n);
    struct stu_details *b=(struct stu_details *)malloc(n*sizeof(struct stu_details));
    for(int i=0;i<n;i++)
    {
        printf("Enter details of Student%d\n",i+1);
        printf("Name - ");
        scanf("%s",b[i].name);
        printf("Roll No. - ");
        scanf("%d",&b[i].roll);
        printf("Gender (M/F)- ");
        scanf("%s",b[i].gender);
        printf("D.O.B. (dd/mm/yy)- ");
        scanf("%s",b[i].dob);
    }
    for(int i=0;i<n;i++)
    {
        printf("\nStudent%d :-\n",i+1);
        printf("Name - %s\nRoll No. - %d\nGender - %s\nD.O.B. - %s\n"
        ,b[i].name,b[i].roll,b[i].gender,b[i].dob);
    }
}