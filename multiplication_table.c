/*
To print the multiplication table
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,i;
    printf("\nEnter the number of table to print :");
    scanf("%d",&n);
    printf("\nEnter the times to print :");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("\n %d*%d=%d",n,i,i*n);
    }
    return 0;
}
