//1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_standard
//- stu_school

#include<stdio.h>
#include<string.h>
struct stundent 
{
	int stu_id,stu_age;
	char stu_standard[50];
	char stu_name[50];
	char stu_course[50];
	char  stu_city[50];
	char stu_school[50];
};
main()
{
	struct stundent stu[50];
	char stu_name[50],stu_course[50],stu_city[50],stu_school[50];
	char stu_standard[50];
	int i,j=1;	
	for(i=0;i<3;i++)
	{
     	printf("Enter name:");
	    scanf(" %[^\n]s",stu_name);
        strcpy(stu[i].stu_name,stu_name);

	    printf("Enter standard:");
	    scanf(" %[^\n]s",stu_standard);
	    strcpy(stu[i].stu_standard,stu_standard);
	    
	    printf("Enter course:");
	    scanf(" %[^\n]s",stu_course);
	    strcpy(stu[i].stu_course,stu_course);
	    
	    printf("Enter school:");
	    scanf(" %[^\n]s",stu_school);
	    strcpy(stu[i].stu_school,stu_school);
	    
	    printf("Enter city:");
	    scanf(" %[^\n]s",stu_city);
	    strcpy(stu[i].stu_city,stu_city);
	    
	    printf("Enter id std %d :",j);
     	scanf("%d",&stu[i].stu_id);
     	
    	printf("Enter age:");
	    scanf("%d",&stu[i].stu_age);	    	    
	    j++;	    
	    printf("\n");	    
	}	
for(i=0;i<3;i++)
{
	printf("id => %d",stu[i].stu_id);
	printf("name => %s",stu[i].stu_name);
	printf("age =>%d",stu[i].stu_age);
	printf("standard => %s",stu[i].stu_standard);
	printf("course => %s",stu[i].stu_course);
	printf("school=> %s",stu[i].stu_school);
	printf("city => %s",stu[i].stu_city);
	
	printf("\n");
}
}
