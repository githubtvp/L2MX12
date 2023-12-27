#include <stdio.h>
#include <stdlib.h>

struct xx
{
    int x; // = 3;
    char name[]; // = "hello";
   // xx(){};
};

struct xx *s;

void main() // changeArr (int *a, int n)
{
    // printf("\nabde"); // newline
    // printf("\bsi");//backspace
    // printf("\rha");//to begining of current line

    int i  = 5;
//    printf("\n\n%d  i :  %d", i++, i);
    i = 5; 
 //   printf("\n\n%d, %d  i :  %d", i--, i, i);
  //  printf("\n\n%d, %d  i :  %d", i--, i++, i);
    i = 5;
    printf("\n\nLine 1 : i : %d,  %d, %d, %d", i,  i++, i--, ++i);
    i = 5;
    printf("\n\nLine 2 : i : %d,  %d, %d, %d, %d", i, i++, i--, ++i, --i);
    // i = 5;
    // printf("\n\n%d, %d, %d, %d, %d", i++, i--, ++i, --i, i);
}