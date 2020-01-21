#include <bits/stdc++.h>
using namespace std;

int sqrtt(int c)
{
    int i=1;
    while(i*i<c)
        i++;
    if(i*i!=c)
        i--;
    return i;
}

bool pan_check(int a,int b,int c)
{
    int d[9];
    for(int i=0;i<9;i++)
        d[i]=0;
    while(a!=0)
    {
        if(a%10==0)
            return false;
        if(!d[a%10-1])
            d[a%10-1]++;
        else
            return false;
        a/=10;
    }
    while(b!=0)
    {
        if(b%10==0)
            return false;
        if(!d[b%10-1])
            d[b%10-1]++;
        else
            return false;
        b/=10;
    }
    while(c!=0)
    {
        if(c%10==0)
            return false;
        if(!d[c%10-1])
            d[c%10-1]++;
        else
            return false;
        c/=10;
    }
    for(int i=0;i<10-1;i++)
        if(d[i]!=1)
        return false;
    return true;
}


int main()
{
    long long sum=0;
    for(int i=1;i<10000;i++)
    {
        int flg=0;
            for(int j=1;j<=sqrtt(i);j++)
            {
                if(i%j==0)
                {
                    int o=i/j;
                    if(pan_check(i,j,o))
                     {
                         if(flg==0)
                         {
                                sum+=i;
                                flg=1;
                                break;
                         }
                     }
                }
                if(flg==1)
                    break;
            }
    }
    cout<<sum;
}
