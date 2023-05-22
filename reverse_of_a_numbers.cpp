#include<iostream>
using namespace std;
int main()
{
    int n,r=0,rem=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        r=r*10+rem;
        n/=10;
    }
    printf("%d",r);
    return 0;
}