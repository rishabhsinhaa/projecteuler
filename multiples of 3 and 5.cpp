#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool con[1001];
    for(int i=0;i<1000;i++)
        con[i]=false;
    for(int i=0;i<1000;i++)
        if(i%3==0)
            if(con[i]==false)
                con[i]=true;
    for(int i=0;i<1000;i++)
        if(i%5==0)
            if(con[i]==false)
                con[i]=true;
    long long int sum=0;
    for(int i=0;i<1000;i++)
        if(con[i]==true)
            sum+=i;
    cout<<sum;
}
