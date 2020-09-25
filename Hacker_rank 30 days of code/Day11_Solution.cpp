****************************************Problem Description***************************************************
Given a 6x6 2D Array,A :

1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
We define an hourglass in A to be a subset of values with indices falling in this pattern in A's graphical representation:

a b c
  d
e f g
There are 16 hourglasses in A, and an hourglass sum is the sum of an hourglass' values.

Task
Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum.

Input Format

There are 6 lines of input, where each line contains  space-separated integers describing 2D Array A; every value in A will be in the inclusive range of -9 to 9.

Output Format

Print the largest (maximum) hourglass sum found in A.
***************************************************Solution**********************************************************
#include <iostream>

using namespace std;
class dim6
{
public:
int a[6][6];
int sumstore[16];
dim6()
{
for(int i=0;i<6;i++)
{
    for(int j=0;j<6;j++)
    {
       cin>>a[i][j];
    }
}
}
int sum();
int maxsum(int s[16]);
};
int dim6::sum()
{
int c1=0,c2=0,sum=0,d;
for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {
       c1=a[i][j]+a[i][j+1]+a[i][j+2];
       c2=a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
       sum=c1+c2+a[i+1][j+1];
       sumstore[i*4+j]=sum;
    }
}
d=maxsum(sumstore);
return d;
}
int dim6::maxsum(int s[16])
{
int largest=s[0];
int pos=0;
for(int k=1;k<16;k++)
{
if(s[k]>largest)
{
    largest=s[k];
    pos=k;
}
}
return largest;
}

int main()
{
int ans;
dim6 d;
ans=d.sum();
cout<<ans;
return 0;
}
