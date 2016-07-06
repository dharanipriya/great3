#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b=5,c=12;
clrscr();
if((a>b)&&(a>c))
{
printf("\n a is greatest");
}
else if((b>a)&&(b>c))
{
printf("b is greatest");
}
else
{
printf("c is greatest");
}
getch();
}
