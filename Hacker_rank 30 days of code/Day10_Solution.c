**************************************************Problem Description*****************************************
Given a base-10 integer,n convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive 1's in n's binary representation.

Input Format

A single integer,n.

Output Format

Print a single base-10 int denoting the maximum number of consecutive 1's the binary representation of n.

****************************************************Solution**************************************************
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int binaarray[100];
    int a=0;
    int k=0, count;
    int size;
    int maxcount=0;
    for(int i=n;i>0;i=i/2)
    {
      a=i%2;
      binaarray[k]=a;
      k++;
    }
    //size=(sizeof(binaarray)/sizeof(binaarray[0]));
    //reverse(binaarray,binaarray+size);
    for(int l=0;l<k;l++)
    {
        if ( binaarray[l]==1)
        {     count=1;
            for (int m=l+1;m<k;m++)
       { 
     if(binaarray[m]==1)
        {
            count=count+1;
        //l=m;
        //break;
        }
        else
        {
            break;
        }
        }
        }
        if(maxcount<count)
        maxcount=count;
    }
    cout<<(maxcount);

    return 0;
}
