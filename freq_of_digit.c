/*
Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format

The first line contains a string,  which is the given number.

Constraints


All the elements of num are made of english alphabets and digits.

Output Format

Print ten space-separated integers in a single line denoting the frequency of each digit from  to .

Sample Input 0

a11472o5t6
Sample Output 0

0 2 1 0 1 1 1 1 0 0 
Explanation 0

In the given string:

 occurs two times.
 and  occur one time each.
The remaining digits  and  don't occur at all.
Sample Input 1

lw4n88j12n1
Sample Output 1

0 2 1 0 1 0 0 0 2 0 
Sample Input 2

1v88886l256338ar0ekk*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *ch=(char*)malloc(1024*sizeof(char));
    scanf("%s",ch);
    int i,a[10]={0};
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='0' && ch[i]<='9')
        {
            a[ch[i]-'0']++;
        }
    }
    for(i=0;i<10;i++)
    {
    printf("%d\t",a[i]);
    }/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
