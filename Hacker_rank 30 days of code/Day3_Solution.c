/*Task
Given an integer,n to perform the following conditional actions:
If n is odd, print Weird
If n is even and in the inclusive range of to 2,5 print Not Weird
If n is even and in the inclusive range of to 6,20 print Weird
If n is even and greater than 20, print Not Weird
Complete the stub code provided in your editor to print whether or not is weird.
Input Format
A single line containing a positive integer,n .
Output Format
Print Weird if the number is weird; otherwise, print Not Weird.*/
********************************************************Solution*****************************************************************
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
int main()
{
    int n;
    scanf("%d",&n);
    if (n%2!=0)
    {
        printf("Weird");
    }
else {
if(n>=2&&n<=5)
{
    printf("Not Weird");
}
else if(n>=6&&n<=20)
{
    printf("Weird");
}
else{
printf("Not Weird");
}

}
return 0;
}
