#include<iostream>
using namespace std;
int main()
{
    long long x;
    cin >> x;
    if(x>0)
    {
        cout << x/10;
    }
    else if(x%10==0 && x<0)
    {
        cout << x/10;
    }
    else if(x%10!=0 && x<0)
    {
        cout << (x/10)-1;
    }
    else
    {
        cout << "0";
    }
}