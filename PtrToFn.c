#include<stdio.h>
int Sum(int,int);
int (*ptr)(int,int);
int main()
{
int a,b,rt;
printf("\nEnter 1st number : ");
scanf("%d",&a);
printf("\nEnter 2nd number : ");
scanf("%d",&b);
ptr = Sum; 
rt = (*ptr)(a,b); 
printf("\nThe sum is : %d",rt);
return 0;
}
int Sum(int x,int y)
{
	return x + y;
}
