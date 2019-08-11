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

bool truncatable(int n)
{
    int i=n;
    int dig=0;
    while(i!=0)
    {
        if(!primes[i])
            return false;
        i/=10;
        dig++;
    }
    i=n;
    int r=1;
    int k=1;
    while(k<dig)
    {
        r*=10;
        k++;
    }
    while(r!=1)
    {
        int re=i%r;
        if(!primes[re])
            return false;
        i=re;
        r/=10;
        //cout<<re<<endl;
    }
    return true;

}

int main()
{
    init_pr();
    int k=0;
    int sum=0;
    for(int i=10;i<mx;i++)
    {
        if(k==11)
            break;

        if(truncatable(i))
        {
            cout<<i<<endl;
            sum+=i;
            k++;
        }
    }
    cout<<sum;
}
