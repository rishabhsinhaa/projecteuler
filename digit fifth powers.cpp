#include <bits/stdc++.h>
using namespace std;

#define mx 354294

int pow_dig(int n)
{
    int sum=0;
    while(n!=0)
    {
        int r=n%10;
        sum+=r*r*r*r*r;
        n/=10;
    }
    return sum;
}


int main()
{
    long long int sum=0;
    for(int i=2;i<mx;i++)
    {
        if(pow_dig(i)==i)
        {
            cout<<i<<endl;
            sum+=i;
        }
    }
    cout<<sum;
}
