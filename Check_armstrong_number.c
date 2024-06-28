//C program to check Armstrong number
#include <stdio.h>
#include <math.h>
int main()
{
    int n, digits=0, temp, check=0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp=n;
    while(temp>0)
    {
       temp/=10; 
       digits++;
    }
    temp=n;
    while(temp>0)
    {
        rem=temp%10;
        check+=pow(rem, digits);
        temp/=10;
    }
    if(check==n)
    {
       printf("Yes, Armstrong number"); 
    }
    else
    {
        printf("No, not an Armstrong no.");
    }
    
    return 0;
}
