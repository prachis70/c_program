//Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_standard
//- stu_school
#include<stdio.h>
struct student
{
int stu_id,stu_age,stu_standard;
char stu_name,stu_course,stu_city,stu_school
};
main()
{
	struct student stu[60];
	char name[50],course[50],city[50],school[50];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		printf("enter id.",j);
	    scanf("%d",&stu[i].stu_id);
	    printf("enter name",j);
	    scanf("%s",&name);
	    printf("enter age.",j);
	    scanf("%d",&stu[i].stu_age);
	    printf("enter standard.",j);
	    scanf("%d",&stu[i].stu_standard);
	    printf("enter scourse",j);
	    scanf("%s",&stu[i].stu_course);
	    printf("enter city",j);
	    scanf("%s",&stu[i].stu_city);
	    printf("enter school",j);
	    scanf("%s",&stu[i].stu_school);
	}
}
	
