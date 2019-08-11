#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    for(int i=10000000;i<=100000000;i++)
        if(isprime(i))
        cout<<i<<endl;
}
