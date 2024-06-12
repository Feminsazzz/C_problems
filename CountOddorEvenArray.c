/*
  Finding odd or even in the array
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int even=0,odd=0;
    int i,a[50],n;
    printf("\nEnter the value of array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\nEnter the %d'th index :",i);
    scanf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
    }
    printf("The number of even values in the array is %d.",even);
    printf("The number of odd values in the array is %d.",odd);
    return 0;
}
