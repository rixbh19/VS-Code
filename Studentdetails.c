#include<stdio.h>
union student{
        int rollno;
        char name[30];
        float marks;
    };
void main()
{
    union student s1;
    printf("Enter roll no. : ");
    scanf("%d",&s1.rollno);
    printf("Roll NO.= %d\n",s1.rollno);
    printf("Enter name : ");
    scanf("%s",s1.name);
    printf("Name : %s\n",s1.name);
    printf("Enter marks of student : ");
    scanf("%f",&s1.marks);
    printf("Marks : %.2f",s1.marks);
}
    