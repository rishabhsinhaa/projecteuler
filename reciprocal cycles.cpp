#include <bits/stdc++.h>
using namespace std;

int recipro(int n)
{
    int rem[n];
    for(int i=0;i<n;i++)
        rem[i]=-1;
    int r=1;
    int l=0;
    while(r<n)
    {
        r*=10;
        l++;
    }
    while(1)
    {
        int re=r%n;
        if(rem[re]==-1)
        {
                rem[re]=l;
        }
        else
        {
            return l-rem[re];
        }
        l++;
        r=re;
        r*=10;
    }
    return l;
}


int main()
{
    int mx=0,m;
    for(int i=2;i<1000;i++)
    {
        if(mx<recipro(i))
        {
            mx=recipro(i);
            m=i;
        }
    }
    cout<<m<<" "<<mx;
}
