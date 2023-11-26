// 8.
#include <stdio.h>
int a, b, c = 0;
void prtFun(void);
int main()
{
    static int a = 1; /* line 1 */
    prtFun();
    a += 1;
    prtFun();
    printf("%d %d ", a, b);
}
void prtFun(void)
{
    static int a = 2; /* line 2 */
    int b = 1;
    a += ++b;
    printf("%d %d ", a, b);
}
// 4 2 6 2 2 0