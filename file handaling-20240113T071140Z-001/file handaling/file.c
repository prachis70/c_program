#include<stdio.h>
main()
{
FILE *fp;//addres of file

fp=fopen("data.html","w");
char name[20];
printf("enter the name:");
gets(name);
printf("%s",name);
fprintf(fp,"%s",name);

fprintf(fp,"%s\n","<html>");
fprintf(fp,"%s\n","<head>");

fprintf(fp,"%s\n","<title>");
fprintf(fp,"%s\n","<aligne=center><personal bio-data>");
fprintf(fp,"%s\n","</title>");


fprintf(fp,"%s\n","<body>");
fprintf(fp,"%s\n","<h1 align=center>personal bio-data</h1>");
fprintf(fp,"%s\n","<h2>Name:prachi singh</h2>");
fprintf(fp,"%s\n","<h2>contact :9510953489</h2>");
fprintf(fp,"%s\n","<h2>collage:ssiu</h2>");
fprintf(fp,"%s\n","<h2>degree:bca</h2>");
fprintf(fp,"%s\n","<h2>Age:19</h2>");
fprintf(fp,"%s\n","<h2>D.O.B:16/7/2005</h2>");


fprintf(fp,"%s\n","</body>");
fprintf(fp,"%s\n","</head>");
fprintf(fp,"%s\n","</html>");

}
