#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void qsn5();
int main()
{
    char *str = "ZOHO";
    while (*str)
    {
        putc(*str, stdout);
        fputchar(*str);
        printf("%c", *str);
        str++;

        // qsn7();
        // qsn6();
        // qsn5();
        return 0;
    }
}


void qsn9()
{
    /*This program uses the datafile.txt which contains the following data*/
    /* Hai. This is PSG Tech.ac.in */
    unsigned char ch;
    // char ch;
    FILE *fp;
    fp = fopen("datafile.txt", "r");
    while ((ch = fgetc(fp)) != EOF)
    { // since ch is unsigned char it will never be equal to -1(EOF)
        printf("%c", ch);
    }
    printf(" Thank you.");
    fclose(fp);
}
void qsn8()
{
    FILE *fp = stdout;
    int n;
    fprintf(fp, "%d ", 45);
    fflush(stdout);
    fprintf(stderr, "%d", 65);
   // return 0;
}

void qsn7()
{
    FILE *fp = stdout;
    int n;
    fprintf(fp, "%d", 45); // output 45
}

void qsn6()
{
    FILE *fp = stdin;
    int n;
    fprintf(fp, "%d", 45); // output nothing
}

void qsn5()
{
    FILE *fp;
    char *str;
    fp = fopen("demo.txt", "r");
    /* demo.txt :you are a good programmer  */
    while (fgets(str, 6, fp) != NULL)
        puts(str);
    fclose(fp);
}