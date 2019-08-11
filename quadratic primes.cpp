#include <bits/stdc++.h>
using namespace std;

const int mx =1000100;

bool primes[mx];

void init_pr()
{
    for(int i=2;i<mx;i++)
        primes[i]=true;
    for(int i=2;i<mx;i++)
    {
        if(primes[i])
        {
            for(int j=2*i;j<mx;j+=i)
            {
                primes[j]=false;
            }
        }
    }
}

int main()
{
    init_pr();
    int mx=0,a=0,b=0;
    for(int i=-999;i<1000;i++)
    {
        for(int j=-1000;j<=1000;j++)
        {
            int k=0;
            while(1)
            {
                int x=k*k+i*k+j;
                if(x>0&&primes[x])
                    k++;
                else
                    break;
            }
            //cout<<i<<" "<<j<<" "<<k<<endl;
            if(mx<k)
            {
                mx=k;
                a=i;
                b=j;
            }

        }
    }
    cout<<mx<<" "<<a<<" "<<b<<endl;
    a=a*b;
    cout<<a;
}
