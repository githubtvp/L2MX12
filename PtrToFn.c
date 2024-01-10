#include <stdio.h>
int sum(int, int);
int (*ptr)(int, int);
int main()
{
	int a, b, res;
	printf("\nEnter 1st number : ");
	scanf("%d", &a);
	printf("\nEnter 2nd number : ");
	scanf("%d", &b);
	ptr = sum;
	res = (*ptr)(a, b);
	printf("\nThe sum is : %d", res);
	return 0;
}
int sum(int x, int y)
{
	return x + y;
}
