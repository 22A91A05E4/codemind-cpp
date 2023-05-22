#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    int t = n*n;
    while(t!=0)
    {
        r = t%10;
        t/=10;
        s=s+r;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}