#include <bits/stdc++.h>
using namespace std;

#define lim 10000001

int pf[lim];

void init_primes()
{
    pf[1]=1;
    for(int i=2;i<lim;i++)
        pf[i]=i;
    for(int i=4;i<lim;i+=2)
        pf[i]=2;
    for(int i=3;i*i<lim;i++)
    {
        if(pf[i]==i)
        {
            for(int j=i*i;j<lim;j+=i)
            {
                if(pf[j]==j)
                {
                    pf[j]=i;
                }
            }
        }
    }

}

vector<int> primes(int a)
{
    vector<int> facts;
    while(a!=1)
    {
        int s=pf[a];
        facts.push_back(s);
        while(pf[a]==s)
        {
            a/=s;
        }
    }
    return facts;
}

int main()
{
    init_primes();
    vector<int> prime;
    int s=0;
    bool found=false;
    int i=210;
    while(!found&&i<lim)
    {
        vector<int> f=primes(i);
        if(f.size()==4)
        {
            prime.push_back(i);
            if(s>2){
                if(prime[s]==prime[s-3]+3)
                {
                    found=true;
                    cout<<prime[s-3];
                }
            }
            s++;
        }
        i++;
    }

}
