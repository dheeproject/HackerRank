******************************************Problem description****************************************************************
Task
Given an array,A, of N integers, print A's elements in reverse order as a single line of space-separated numbers.

Input Format

The first line contains an integer, N (the size of our array).
The second line contains N space-separated integers describing array A's elements.

Output Format

Print the elements of array A in reverse order as a single line of space-separated numbers.

**************************************************Solution*******************************************************************
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
char** split_string(char*);



int main()
{int n;
scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
 for(int j=n-1;j>=0;j--)
 {
     printf("%d ",arr[j]);
 }
}
