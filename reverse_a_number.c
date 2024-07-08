#include <stdio.h> 

int reverseDigits(int num) 
{ 
    int rev=0;
    while(num!=0)
    {
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    return rev;
} 

int main() 
{ 
    int num;
    printf("Enter a number: "); 
    scanf("%d", &num);
    printf("Reversed digit: %d", reverseDigits(num));
    return 0; 
}
