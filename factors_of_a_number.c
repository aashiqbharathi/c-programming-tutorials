//Display Factors of a number
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The divisors of %d are:\n", n);
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
