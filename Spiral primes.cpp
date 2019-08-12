#include <bits/stdc++.h>
using namespace std;

bool isprime(long long n)
{
    for(long long i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;

}

int main()
{
    long long d1=10,d2=12,d3=14,d4=16;
    long long n1=3,n2=5,n3=7,n4=9;
    long long cnt=5;
    long long pr=3;
    int len=3;
    long double dec=(long double)pr/cnt;
    while(dec>=0.1)
    {
        len+=2;
        cnt+=4;
        if(isprime(n1+d1))
            pr++;
        if(isprime(n2+d2))
            pr++;
        if(isprime(n3+d3))
            pr++;
        if(isprime(n4+d4))
            pr++;
        dec=(long double)pr/cnt;
        n1+=d1;
        n2+=d2;
        n3+=d3;
        n4+=d4;
        d1+=8;
        d2+=8;
        d3+=8;
        d4+=8;
       // cout<<dec<<" "<<len<<endl;
    }
    cout<<len<<endl;

}
