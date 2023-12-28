// 4. Output of following program?
#include <stdio.h>
int main()
{
    static int i = 5;
    if (--i)
    {
        main();
        printf("%d ", i);// 0 0 0 0
    }
    return 0;
}


/*
//5. 
#include<stdio.h>
int main()
{
    static int i=5;
    if (--i){
        printf("%d",i);//4 3 2 1
        main();
    }
}
*/