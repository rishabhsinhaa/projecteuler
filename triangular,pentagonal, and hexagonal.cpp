#include <bits/stdc++.h>
using namespace std;

bool isps(int n)
{
    double p=(sqrt(24.0*n+1.0)+1.0)/6.0;
    return p==(int)p;
}
int main()
{
    int i=143;
    while(1)
    {
        i++;
        long long p=i*(2*i-1);
        if(isps(p))
        {
            cout<<p<<endl;
            break;
        }
    }
}
