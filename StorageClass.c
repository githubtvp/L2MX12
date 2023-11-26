// 1. Write the output for the successful execution.
#include &lt;stdio.h&gt;
struct abc
{ int a; int *b; int c[5]; };
void foo (struct abc x, struct abc y[] )
{ x.a = 25;
*(x.b) = 50;
x.c[0] = 30;
y[0] = x; }
int main ()
{ struct abc x, y[5] ;
int n = 20;
x.a = 5;
x.b = &amp;n;
x.c[0] = 10;
y[0] = x;
foo (x, y) ;
printf (&quot; x: %d, %d \n&quot;, x.a, x.c[0]) ;
printf (&quot;y[0]: %d, %d \n&quot;, y[0].a, y[0].c[0]) ;
printf (&quot;n=%d\n&quot;, n) ;
}
// 2. # include &lt;stdio.h&gt;
int funct1 (int );
int funct2(int);
main() {
int a=0,b=1,count;
for ( count =1; count &lt; = 5 ; ++count)
{ b+=funct1(a++) + funct2(a++);
printf(“%d”,b++);
}
}
int funct1( int a)
{ static int b;
b= funct2(a++);
return b++;
}
int funct2(int a)
{ static int b= 1;
b+=1;
return(b++ + a++);
}

/*3.
ii. The following C function is used to compute the product of two matrices, with each matrix
represented as a 2-d array. The function takes as parameters a 2-d array A with n_r_A rows and
n_c_A columns and a 2-d array B with n_r_B rows and n_c_B columns. The function returns a
pointer to the first element of the product matrix C. Fill in the missing lines.
*/
int ** mult(int **a, int n_r_a,int n_c_a,int **b,int n_r_b, int n_c_b) {
int ------ ; // declare suitable variable for returning results
int sum,I,j,k;
c= ______________________________; // dynamic memory allocation
for(i=0;i&lt;n_r_a;i++) {
c[i]= --------------------------------------------------; //dynamic memory allocation
for(j=0;j&lt;n_c_b;j++) {
c[i][j]=0;
for(k=0;k&lt; -------;k++)
(*(*(c+i)+J)= -------------------------------------------;
} }
return ------------;

// 4. Output of following program?
#include &lt;stdio.h&gt;
int main()
{
static int i=5;
if(--i){
main();
printf(&quot;%d &quot;,i);
}
return 0;
}

5. #include &lt;stdio.h&gt;
int main()
{
    static int i=5;
    if (--i){
        printf(&quot;%d &quot;,i);
        main();
    }
}

6. #include &lt;stdio.h&gt;
int fun()
{
  static int num = 16;
  return num--;
}
 
int main()
{
  for(fun(); fun(); fun())
    printf(&quot;%d &quot;, fun());
  return 0;
}
7. Consider the following C function
int f(int n)
{
   static int i = 1;
   if (n &gt;= 5)
      return n;
   n = n+i;
   i++;
   return f(n);
}
8. #include &lt;stdio.h&gt;
int a, b, c = 0;
void prtFun (void);
int main ()
{
    static int a = 1; /* line 1 */
    prtFun();
    a += 1;
    prtFun();
    printf ( &quot;n %d %d &quot; , a, b) ;
}
  void prtFun (void)
{

    static int a = 2; /* line 2 */
    int b = 1;
    a += ++b;
    printf (&quot; n %d %d &quot; , a, b); }
9. #include &lt;stdio.h&gt;
int main()
{
  extern int i;
  printf(&quot;%d &quot;, i);
  {
       int i = 10;
       printf(&quot;%d &quot;, i);
  }
}

10. Output of following program
#include &lt;stdio.h&gt;
int fun(int n)
{
    static int s = 0;
    s = s + n;
    return (s);
}
 
int main()
{
    int i = 10, x;
    while (i &gt; 0)
    {
        x = fun(i);
        i--;
    }
    printf (&quot;%d &quot;, x);
    return 0;
}