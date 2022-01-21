/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
    while(t--)
    {
        
     string s;
     int j=0;
      cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        j++;
        if(s[i]=='B')
        j=j+2;
        if(s[i]=='D')
        j++;
        if(s[i]=='O')
        j++;
        if(s[i]=='P')
        j++;
        if(s[i]=='Q')
        j++;
        if(s[i]=='R')
        j++;
        
        
    }
    
    cout<<j<<endl;
    }
    return 0;
}

