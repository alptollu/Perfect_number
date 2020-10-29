#include <stdio.h>

int perfect(int n)
{
    int i=1;
    int total=0;

    while (i<n)
    {
        if(n%i==0)
        {
            total=total+i;
        }
        i++;
    }
    if (total==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() {
    int number;
    int result;
    printf("Please enter a number to check if its perfect number\n");
    scanf("%d",&number);

    result=perfect(number);
    if(result==1)
    {
        printf("Your number is a perfect number!");
    }
    if(result==0)
    {
        printf("Your number is not a perfect number!");
    }
    return 0;
}
