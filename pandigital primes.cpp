#include <bits/stdc++.h>
using namespace std;

int num_dig(long long n)
{
    int nt=0;
    while(n!=0)
    {
        nt++;
            n/=10;
    }
    return nt;
}

bool ispr(long long n)
{
    if(n%6!=5&&n%6!=1)
        return false;
    for(long long i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

bool pandig(long long n)
{
    int l=num_dig(n);
    int arr[l+1];
    for(int i=0;i<=l;i++)
        arr[i]=-1;
    long long o=n;
    while(o!=0)
    {
        arr[o%10]=1;
        o/=10;
    }
    for(int i=1;i<=l;i++)
    {
        if(arr[i]!=1)
            return false;
    }
    return true;
}

int main()
{
    long long mx=0;
    for(long long i=1000000;i<10000000;i++)
    {
        if(pandig(i))
         {
             if(ispr(i))
             {
                 cout<<i<<endl;
                 mx=i;

             }
         }
    }
    cout<<mx;
}
