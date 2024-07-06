#include <stdio.h>
#include <math.h>

int numberofdigits(int number);
int sumofcubes(int num);
int main()
{
    int lower, upper, n;
    printf("Enter lower & upper limits: ");
    scanf("%d %d", &lower, &upper);
    printf("Armstrong numbers:\n");
    for(int i=lower; i<=upper; i++)
    {
        n=sumofcubes(i);
        if(n==i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

int numberofdigits(int number)
{
    int digits=0;
    while(number>0)
    {
        number/=10;
        digits+=1;
    }
    return digits;
}

int sumofcubes(int num)
{
    int rem, sum=0, digit;
    digit=numberofdigits(num);
    while(num>0)
    {
        rem=num%10;
        sum+=pow(rem, digit);
        num/=10;
    }
    return sum;
}
