#include <bits/stdc++.h>
using namespace std;

int div_sum(int n)
{
    int sum=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i!=n/i)
            sum+=i+n/i;
            else
                sum+=i;
        }
    }
    return sum;
}


int main()
{
    vector<int> v;
    bool abun[28123];
    for(int i=0;i<28123;i++)
        abun[i]=false;
    for(int i=1;i<28123;i++)
    {
        if(div_sum(i)>i)
            v.push_back(i);
    }
    long long sum=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i;j<v.size();j++)
        {
            if(v[i]+v[j]<28123)
                abun[v[i]+v[j]]=true;
        }
    }
    for(int i=1;i<28123;i++)
    {
        if(!abun[i])
            sum+=i;
    }
    cout<<sum<<endl<<v.size()<<endl<<div_sum(9);

}
