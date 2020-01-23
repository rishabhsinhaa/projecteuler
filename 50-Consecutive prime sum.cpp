#include <bits/stdc++.h>
using namespace std;

#define lim 1000001

int su=0;

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

vector<int> series()
{
    init_primes();
    int sum=0;
    vector<int> ser;
    for(int i=2;i<lim&&sum+i<lim;i++)
    {
        if(pf[i]==i)
        {
          //  cout<<i<<endl;
            ser.push_back(i);
            sum+=i;
        }

    }
    su=sum;
    return ser;
}


int main()
{
    vector<int> ser=series();
    int n=ser.size();
    cout<<su<<endl;;
    for(int i=0;i<n;i++)
    {
        int sum=su;
        for(int j=0;j<i;j++)
        {
            sum-=ser[n-j-1];
        }
        for(int j=0;j<=i;j++)
        {
            if(sum==pf[sum])
            {
              //  cout<<sum<<" "<<n-i<<" "<<n<<endl;
              cout<<sum<<" "<<i<<endl;
              return 0;

            }
            if(i<5)
            {
                //cout<<sum<<" "<<i<<endl;
            }
            sum-=ser[j];
            sum+=ser[j+n-i];
        }
    }
}
