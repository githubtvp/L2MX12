#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x = 2; //-2;
               /* True always
               if(x+1 > x)
               {
                printf("\n1. True");
               }
               else{
                printf("\n1. False");
               }
               */
               // If x = 0 => false else true always
               /* if (((x>>1)<<1) | (x&1))
                {
                 printf("\n2. True");
                }
                else{
                 printf("\n2. False");
                }
                */
    // out put => TEN=10  i.e. j=4 and then j = 10 finally
    int j = (printf("TEN="), 10);
    printf("%d", j);
    // return 0;
    printf("\n\n)");
    int num = 219219, out;
    for (scanf("%d", &num), out = 0; num != 0; out = out * 10 + (num % 10), num = num / 10)
        ;
    printf("%d", out);

    printf("\n\n---The end--");
}