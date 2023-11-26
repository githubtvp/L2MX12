// 2. # include &lt;stdio.h&gt;
# include<stdio.h>
int funct1(int);
int funct2(int);
main()
{
    int a = 0, b = 1, count;
    for (count = 1; count <= 5; ++count)
    {
        b += funct1(a++) + funct2(a++);
        printf("% d", b++);
    }
}
int funct1(int a)
{
    static int b;
    b = funct2(a++);
    return b++;
}
int funct2(int a)
{
    static int b = 1;
    b += 1;
    return (b++ + a++);
}//8 28 60 104 160
