// 6. #include &lt;stdio.h&gt;
#include <stdio.h>
int fun()
{
    static int num = 16;
    return num--;//15,14,13,12,11
}

int main()
{
    for (fun(); fun(); fun())
        printf("% d ", fun());//14
    return 0;
}//14 11 8 5 2