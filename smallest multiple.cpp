#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int pr=1;
    for(int i=1;i<=20;i++)
    {
        if(pr%i!=0)
        {
            long long int j=pr;
           // cout<<i<<endl;
            while(pr%i!=0)
                pr+=j;
        }
    }
    cout<<pr;
}
