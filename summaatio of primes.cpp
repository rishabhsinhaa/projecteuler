#include <bits/stdc++.h>
using namespace std;

int n=2000000;

int main()
{
    bool prime[n+1];
    for(int i=0;i<=n;i++)
        prime[i]=true;
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(int j=i+i;j<=n;j+=i)
                prime[j]=false;
        }
    }
    long long int sum=0;
    for(int i=2;i<=n;i++)
        if(prime[i])
           {
               //cout<<i<<endl;
               sum+=i;
           }
    cout<<sum;
}
