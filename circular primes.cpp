#include <bits/stdc++.h>
using namespace std;

#define mil 1000000


bool primes[mil+1];

int num_dig(int i)
{
    int cnt=0;
    while(i!=0)
    {
        i/=10;
        cnt++;
    }
    return cnt;
}

bool circular(int i)
{
    int dig=num_dig(i);
    int cnt=1;
    int cot=1;
    while(cnt!=dig)
    {
        int r=i%10;
        int d=i/10;
        int o=r;
        for(int j=1;j<dig;j++)
            o=o*10;
        i=d+o;
       // cout<<i<<" "<<r<<" "<<d<<" "<<o<<endl;
        if(primes[i]==false)
            cot++;
            cnt++;
    }
    if(cot==dig)
        return true;
    return false;

}


int main()
{
    for(int i=2;i<=mil;i++)
        primes[i]=false;
    vector<int> v;
    for(int i=2;i<=mil;i++)
    {
        if(primes[i]==false)
        {
            v.push_back(i);
            for(int j=2*i;j<=mil;j=j+i)
                primes[j]=true;
        }
    }
    int cnt=0;
    for(int i=0;i<v.size();i++)
    {
        if(circular(v[i]))
        {
            cnt++;
               cout<<v[i]<<endl;
        }
    }
    //cout<<circular(929);
    cout<<cnt;

}
