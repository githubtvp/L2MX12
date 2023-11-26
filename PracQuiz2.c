#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#include <stdio.h>
int f(int n);
int main()
{
   // printf("%d", main);
   printf("\nf(0) : %d ", f(0)); //6
    return 0;
}

int f(int n)
{
    static int i = 1;//0 
    if (n >= 5)
        return n;
    n = n + i;
    i++;
    return f(n);
}
/* #define x 10 * 10
 #include <stdio.h>
 int main(){
    int a = x + x;
    printf("%d",a);
    return 0;
}
*/

/*
#define x 10
#include <stdio.h>
int main(){
    x++; //error: lvalue required as increment operand   20 |     x++;      |      ^~
    printf("%d", x);
return 0;}
*/
/*
#include <stdio.h>
#include <string.h>
#define MACRO(num) ++num
int main()
{
    char *ptr = "preprocessor";
    int num = strlen(ptr);
    printf("%s  ", MACRO(ptr));//reprocessor -- pointer is advanced before print
    printf("%d", MACRO(num));//13
    return 0;
}
*/
/*
#include <stdio.h>
int num = 5;
int main()
{
    fun();
    fun();
    return 0;
}
int fun()
{
    static int num = 2;
    printf("%d ", num); //2 3
    num++;
    return 0;
}
*/
/*
#include <stdio.h>
void fun(int);
int main()
{
    int a = 3;
    fun(a);
    return 0;
}

void fun(int n)
{
    if (n > 0)
    {
        fun(--n);
        printf("%d ", n); //0 1 2
    }
}
*/