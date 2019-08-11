#include <bits/stdc++.h>
using namespace std;

int div_sum(int s)
{
    int sum=1;
    for(int i=2;i<=sqrt(s);i++)
    {
        if(s%i==0)
        {
            sum+=i+s/i;
            //cout<<i<<" "<<s/i<<endl;
        }
    }
    return sum;
}

int main()
{
    long long int sum=0;
    for(int i=1;i<=10000;i++)
    {
        if(div_sum(div_sum(i))==i&&div_sum(i)!=i)
            sum+=i;
    }
    cout<<sum<<endl;
    }
