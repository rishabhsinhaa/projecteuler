#include <bits/stdc++.h>
using namespace std;

bool ispent(int n)
{
    double p=(sqrt(24.0*n+1.0)+1.0)/6.0;
    return p==(int)p;
}

int main()
{
    int i=1,flg=0;;
    while(1)
    {
        int n=i*(3*i-1)/2;
        for(int j=i-1;j>0;j--)
        {
            int m=j*(3*j-1)/2;
            if(ispent(n+m)&&ispent(n-m))
            {
                cout<<n-m<<endl;
                flg=1;
                break;
            }
        }
        i++;
        if(flg==1)
            break;
    }
}
