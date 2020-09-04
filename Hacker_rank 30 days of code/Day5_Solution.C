*****************************************Problem Description*****************************************************************
Given an integer,n , print its first 10 multiples. Each multiple nxi (where 1<=i<=10) should be printed on a new line in the form: n x i = result.
Input Format
A single integer, n.
Output Format
Print 10 lines of output; each line i (where 1<=i<=10) contains the result of nxi in the form:
n x i = result.
*************************************************Solution*********************************************************************
//Header Files were already in the stub code and I didn't change it to limit only what is required, Hope you Understand. Happy Coding:) 
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
    int n, result;
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
       result=n*i;
        printf("%d x %d = %d",n,i,result);
        printf("\n");
    }
}
