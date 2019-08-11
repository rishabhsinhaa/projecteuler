#include <bits/stdc++.h>
using namespace std;

bool prime[1000000];

void init_prime()
{
    for(int i=2;i<1000000;i++)
    {
        prime[i]=true;
    }
    for(int i=2;i<1000000;i++)
    {
        if(prime[i])
        {
            for(int j=2*i;j<1000000;j+=i)
                prime[j]=false;
        }
    }
}

int main()
{
    init_prime();
    vector<int> v;
    for(int i=2;i<1000000;i++)
        if(prime[i])
            v.push_back(i);
    cout<<v.size()<<endl;
    int dp[100000];
    for(int i=2;i<100000;i++)
        dp[i]=1;
        int mx=0;
        sort(v.begin(),v.end());
    for(int i=2;i<100000;i++)
    {
        if(prime[i])
        for(int j=i-1;j>=2;j--)
        {
            if(prime[i-j])
                {
                    dp[i]=max(dp[i],dp[i-j]+1);
                    if(dp[i]>mx)
                        mx=dp[i];
                }
            }

    }
    for(int i=2;i<=50;i++)
    {
        if(prime[i])
            cout<<i<<" "<<dp[i]<<endl;
    }
}
