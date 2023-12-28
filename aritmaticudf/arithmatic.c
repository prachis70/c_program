//Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
//For example,
//Output:
//Press 1 for +
//Press 2 for -
//Press 3 for *
//Press 4 for /
//Press 5 for %
//Press 0 for the exit
//
//Enter your choice: 1
//Enter the first number: 5
//Enter the second number: 3
//Addition of 5 and 3 is 8
//
//Press 1 for +
//Press 2 for -
//Press 3 for *
//Press 4 for /
//Press 5 for %
//Press 0 for the exit
//
//Enter your choice: 4
//Enter the first number: 10
//Enter the second number: 5
//Division of 10 and 5 is 2
//
//Press 1 for +
//Press 2 for -
//Press 3 for *
//Press 4 for /
//Press 5 for %
//Press 0 for the exit
void print() 
{
	printf("Enter +.\n");
 	printf("Enter -.\n");
 	printf("Enter *.\n");
 	printf("Enter /.\n");
 	printf("Enter %.\n");
 	printf("Enter the 0 .\n");
	int  p;
	printf("Enter your choice.");
    scanf(" %c",&p);
	int a,b,result;
	printf("Enter the first .");
	scanf("%d",&a);
	printf("Enter the second.");
	scanf("%d",&b); 
	switch(p)
	{
		case '0':result=a*0;
		printf("calci off is%d",result);
		break;
		case '+': result=a+b;
		printf("sum is%d",result);
		break;
		case '-': result=a-b;
		printf("sub is%d",result);
		break;
		case '*': result=a*b;
		printf("multy is%d",result);
		break;
		case '/': result=a/b;
		printf("div is%d",result);
		break;
		case '%': result=a%b;
		printf("module is%d",result);
		break;			
   }
   prachi();
   print();
}
void prachi()
{
	printf("\n");
}
main()
{
 	print();
 	int ck=0;
	 if(ck==0)
	 {
	 	ck=0;
	 }	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
