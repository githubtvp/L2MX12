#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define MAXLOWER 10
#define MAXUPPER 25
int main()
{
   // p1();
    p2();
    printf("\nTest line ");
    return 0;
}

int p1()
{
#define square(x) x *x
    int i;
    i = 27 / square(3); // 27/ 3 * 3 = 9 * 3 = 27
   return printf("%d", i);
}

void p2()
{
    int i = 5;
    printf("%d, %d, %d", i++, i++, i++);
    //7 6 5 => 'coz parameter processingright to left 
}
