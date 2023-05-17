//wap to store student info of an educational institute and display all the data 
//using structutre
//roll , name , gender , marks , d.o.b.
#include<stdio.h>
struct student_data
{
    char name[100];
    char gender[1];
    int roll;
    int marks;
    int dob;
};
void main()
{
    struct student_data b[100];
    int n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the details of student %d\n",i+1);
        printf("Name:");
        scanf("%s",&b[i].name);
        printf("Gender (M\\F):");
        scanf("%s",&b[i].gender);
        printf("Roll No.");
        scanf("%d",&b[i].roll);
        printf("Marks:");
        scanf("%d",&b[i].marks);
        printf("D.O.B.:");
        scanf("%d",&b[i].dob);
    }
    for(int i=0;i<n;i++)
    {
        printf("\nDetails of student %d",i+1);
        printf("\nName - %s",b[i].name);
        printf("\nGender - %s",b[i].gender);
        printf("\nRoll No. - %d",b[i].roll);
        printf("\nMarks - %d",b[i].marks);
        printf("\nD.O.B. - %d",b[i].dob);
    }
}