#include <bits/stdc++.h>
using namespace std;

bool ispalin(int s)
{
    int revers=0;
    int b=s;
    while(b!=0)
    {
        revers*=10;
        revers+=b%10;
        b/=10;
    }
    if(revers==s)
        return true;
    else
        return false;
}

int main()
{
    vector<int> v;
    for(int i=999;i>=100;i--)
    {
        for(int j=i-1;j>=100;j--)
        {
            if(ispalin(i*j))
            {
                v.push_back(i*j);
            }
        }
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1];
}


//L6bv12R
//12345
