#include <bits/stdc++.h>
using namespace std;

bool isprime(long long o)
{
    for(int i=2;i<=o/2;i++)
    {
        if(o%i==0)
            return false;
    }
    return true;
}

int main()
{
    int k=6;
    int n=3;
    while(k!=10001)
    {
        if(isprime(n*6-1))
        {
            k++;
            if(k==10001)
             {
                 cout<<n*6-1;
                 break;
             }
        }
        if(isprime(n*6+1))
        {
            k++;
            if(k==10001)
            {
                cout<<n*6+1;
                break;
            }
        }
        n++;
    }
}
