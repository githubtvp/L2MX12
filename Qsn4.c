// 4. Output of following program?
#include <stdio.h>
int main()
{
    static int i = 5;
    if (--i)
    {
        main();
        printf("%d ", i);
    }
    return 0;
}
// 0 0 0 0