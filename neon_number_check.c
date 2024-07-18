#include<stdio.h>
int neonchk(int n);
int main()
{
    int n, sq, neon;
    printf("Enter a number: ");
    scanf("%d", &n);
    sq=n*n;
    neon=neonchk(sq);
    if (n==neon)
    {
        printf("%d is a neon number", n);
    }
    else
    {
        printf("%d is not a neon number", n);
    }
}
int neonchk(int n)
{
    int rem, sum=0;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum;
}
