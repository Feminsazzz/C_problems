/* Fibonacci Series */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a=-1,b=1,c;
    printf("\nEnter the limit : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\n%d",c);
    }
    return 0;
}
