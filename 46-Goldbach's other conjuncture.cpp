#include <bits/stdc++.h>
using namespace std;

int sqrtt(int c)
{
    int i=1;
    for(i=1;i*i<=c;i++);
    if(i*i==c)
        return i;
    return i-1;
}

bool is_pr(int c)
{
    if(c==3||c==2)
        return true;
    for(int i=2;i<=sqrtt(c);i++)
    {
        if(c%i==0)
            return false;
    }
    return true;
}

int main()
{
    map<int,int> hm;
    for(int i=2;i<100000;i++)
    {
        if(is_pr(i))
        {
            int j=0;
            while(2*j*j+i<100000)
            {
                if(hm.find(2*j*j+i)==hm.end())
                {
                   hm[2*j*j+i]=1;
                   int s=2*j*+i;
                  // cout<<"2*"<<j<<"*"<<j<<"+"<<i<<"="<<s<<endl;
                }
                j++;
            }
        }
    }
    for(int i=3;i<10000;i+=2)
    {
        if(hm.find(i)==hm.end())
         {
             cout<<i<<endl;
             break;
         }
    }
    //cout<<hm.size();
}
