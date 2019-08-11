#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int dp[21][21];
    dp[0][0]=0;
    for(int i=1;i<21;i++)
    {
        dp[i][0]=1;
        dp[0][i]=1;
    }
    for(int i=1;i<21;i++)
    {
        for(int j=1;j<21;j++)
        {
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    for(int i=1;i<21;i++)
        cout<<dp[i][i]<<endl;
}
