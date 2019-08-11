#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dp[201][201];
    int coins[]={1,2,5,10,20,50,100,200};
    for(int i=0;i<=200;i++)
        dp[i][0]=1;

    for(int i=0;i<=200;i++)
    {
        for(int j=0;j<8;j++)
        {
            dp[i][j]=dp[i][j-1];
            if(coins[j]<=i)
                dp[i][j]+=dp[i-coins[j]][j];
        }
    }
  //  for(int i=0;i<=200;i++)
//        cout<<dp[i]<<endl;
    cout<<dp[200][200]<<endl<<dp[1][1]<<endl<<dp[2][2];
}
