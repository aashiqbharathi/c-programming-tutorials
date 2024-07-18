#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,n0,n,flag;
    printf("Enter a number: ");
    scanf("%d %d", &n0, &n);
    printf("Prime numbers between %d and %d are:\n", n0, n);
    for(j=n0; j<=n; j++)
    {
        if(j==1)
        {
            continue;
        }
        flag=0;
        for (i=2; i<j; i++)
        {
            //if divisible by i->!prime, so flag==1.
            if(j%i!=0)
            {
                continue;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag==0)
        {
            printf("%d\n", j);
        }        
    }
    getch();
}
