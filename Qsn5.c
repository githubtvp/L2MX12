
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

