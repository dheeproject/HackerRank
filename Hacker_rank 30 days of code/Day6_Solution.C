************************************************Problem Description********************************************************************
Given a string,S, of length N-1 that is indexed from 0 to N-1, print its even-indexed and odd-indexed characters as 2 space-separated strings on a single line (see the Sample below for more detail).

Note: 0 is considered to be an even index.

Input Format:

The first line contains an integer, T (the number of test cases).
Each line i of the T subsequent lines contain a String,S.

Output Format

For each String S(j) (where 0<=j<=T-1), print S(j)'s even-indexed characters, followed by a space, followed by S(j)'s odd-indexed characters.

*************************************************Solution***********************************************************************************
#include <iostream>
//#include <algorithm>
#include<string>
using namespace std;
void calc(string stc)
{
    int size=0;
    for(int i=0;stc[i]!='\0';i=i+2)
{
    if(i>0&&stc[i-1]=='\0')
    {
        break;
    }    
cout<<stc[i];
}
cout<<" ";
for( int j=1;stc[j]!='\0'&&stc[j-1]!='\0';j+=2)
{
cout<<stc[j];
}
cout<<"\n";
stc.clear();
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        str.clear();
        cin>>str;
        calc(str);
    }

    return 0;
}
