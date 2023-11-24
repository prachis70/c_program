#include <stdio.h>
 
int main()
{
    int x , y ;
    switch (x)
	 {
    case 1:
    switch (y)
      {
        case 2:printf( "choice is 2");
        break;
        case 3:printf( "choice is 3");
        break;
      }
        break;
        case 4:printf( "choice is 4");
        break;
        case 5:printf( "choice is 5");
        break;
        default:
        printf( "choice is other than 1, 2 3, 4, or 5");    
    }
}
