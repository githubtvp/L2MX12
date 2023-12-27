#include<stdio.h> 

int main()
{
    int i = 2;
    int *a[] = {&i};
     printf("%d", (*a)[0]);
    return 0;
}
