#include <bits/stdc++.h>
using namespace std;

bool ispalin(int i)
{
    int p=0,j=i;
    while(j!=0)
    {
        p*=10;
        p+=j%10;
        j/=10;
    }
    if(p==i)
        return true;
    return false;
}

bool palinstr(int i)
{
    string s="";
    int j=i;
    while(j!=0)
    {
        if(j%2==0)
        {
            s=s+'0';
        }
        else
        {
            s=s+'1';
        }

        j/=2;
    }
    for(j=0;j<=s.length()/2;j++)
    {
        if(s[j]!=s[s.length()-j-1])
            return false;
    }
    cout<<s<<" ";
    return true;
}

int main()
{
    long long int sum=0;
    for(int i=1;i<=1000000;i++)
    {
        if(ispalin(i))
        {
            if(palinstr(i))
            {
                cout<<i<<endl;
                sum+=i;
            }
        }
    }
    cout<<sum;
}
