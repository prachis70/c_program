//Q.2 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.
//For example,
//Input:
//Enter details of Student 1:
//Roll no => 121
//Name => Raj Patel
//Chemistry => 95
//Mathematics => 90
//Physics => 88
//
//Enter details of Student 2:
//Roll no => 122
//Name => Divya Sharma
//Chemistry => 92
//Mathematics => 80
//Physics => 84
//
//Enter details of Student 3:
//Roll no => 123
//Name => Piyush Mishra
//Chemistry => 72
//Mathematics => 87
//Physics => 93
//
//Enter details of Student 4:
//Roll no => 124
//Name => Vatsal Mangukiya
//Chemistry => 68
//Mathematics => 96
//Physics => 85
//
//Enter details of Student 5:
//Roll no => 125
//Name => Sagar Trivedi
//Chemistry => 91
//Mathematics => 89
//Physics => 77
//
//Output:
//Raj Patel (121)
//Chemistry => 95
//Mathematics => 90
//Physics => 88
//Total => 273/300
//Percent => 91.00%
//
//Divya Sharma (122)
//Chemistry => 92
//Mathematics => 80
//Physics => 84
//Total => 256/300
//Percent => 85.33%
//
//Piyush Mishra (123)
//Chemistry => 72
//Mathematics => 87
//Physics => 93
//Total => 252/300
//Percent => 84.00%
//
//Vatsal Mangukiya (124)
//Chemistry => 68
//Mathematics => 96
//Physics => 85
//Total => 249/300
//Percent => 83.00%
//
//Sagar Trivedi (125)
//Chemistry => 91
//Mathematics => 89
//Physics => 77
//Total => 257/300
//Percent => 85.66%
#include <stdio.h>
struct Marks 
{
    int roll_no;
    char name[30];
    float chem_marks, maths_marks, phy_marks;
};
//main function
main()
 {
    struct Marks marks[5];
    int i;
    for(i=0; i<2; i++){
		printf("Student %d\n",i+1);
		printf("name :");     
        scanf("%[^\n]s",marks[i].name);
		
        printf("roll_no  :");  
        scanf("%d", &marks[i].roll_no);
        
//        printf("name :");     
//        scanf("%[^\n]s",marks[i].name);
        
        printf("Chem_marks :");  
        scanf("%f", &marks[i].chem_marks);
        
        printf("Maths_marks :");       
        scanf("%f", &marks[i].maths_marks);
        
        printf("Phy_marks :"); 
        scanf("%f", &marks[i].phy_marks);
        
        printf("Total :"); 
        int  Total= (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks);
        printf("Total :%d\n",Total);
  
       float percentage = (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks)/300.0*100;
       printf("Percentage : %0.2f\n\n", percentage); 
    }
}
