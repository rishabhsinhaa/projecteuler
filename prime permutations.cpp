#include<bits/stdc++.h>
using namespace std;

int prime[10000];

string rev(string s)
{
    string temp="";
    for(int i=0;i<s.length();i++)
    {
        temp=s[i]+temp;
    }
    return temp;
}

void init_prime()
{
    for(int i=2;i<10000;i++)
    {
        if(prime[i]==0)
        {
            for(int j=2*i;j<10000;j+=i)
            {
                prime[j]=1;
            }
        }
    }
}

string conv(int n)
{
    string s="";
    while(n!=0)
    {
        s=s+std::to_string(n%10);
        n/=10;
    }
    return rev(s);
}

int vnoc(string s)
{
    int n=0;
    for(int i=0;i<s.length();i++)
    {
        n*=10;
        n+=s[i]-'0';
    }
    return n;
}

int main()
{
    for(int i=2;i<10000;i++)
        prime[i]=0;
    init_prime();
    int flg=0;
    for(int i=1488;i<9999;i++)
    {
        if(prime[i]==1)
            continue;
        string s=conv(i);
        string g=s;
        while(next_permutation(g.begin(),g.end()))
        {

                int j=vnoc(g);
                if(j<i)
                    continue;
                int d=j-i;
                if(j+d>9999)
                    continue;
                    if(prime[j]==1)
                        continue;
                string k=g;
                while(next_permutation(k.begin(),k.end()))
                {
                    int h=vnoc(k);
                    if(j+d!=h)
                        continue;
                    if(prime[h]==1)
                        continue;
                    cout<<i<<j<<h;
                    flg=1;
                }
                if(flg==1)
                    break;
        }
        if(flg==1)
            break;
    }
}
