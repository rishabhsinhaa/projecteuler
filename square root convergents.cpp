#include <bits/stdc++.h>
using namespace std;

string rev(string s)
{
    string u="";
    for(int i=0;i<s.length();i++)
    {
        u=s[i]+u;
    }
    return u;
}

string add_s(string a,string b)
{
    int c=0;
    if(a.length()<b.length())
        swap(a,b);
    a=rev(a);
    b=rev(b);
    for(int i=0;i<b.length();i++)
    {
        int u=a[i]-'0';
        int uu=b[i]-'0';
        u+=uu+c;
        c=0;
        if(u>9)
        {
            u-=10;
            c=1;
        }
        a[i]=u+'0';
    }
    if(c==1&&a.length()==b.length())
        a=a+"1";
    else if(c==1)
    {
        for(int i=b.length();i<a.length();i++)
        {
            int u=a[i]-'0';
            u+=c;
            c=0;
            if(u>9)
            {
                u-=10;
                c=1;
            }
            a[i]=u+'0';
        }
        if(c==1)
            a=a+"1";
    }
    return rev(a);
}

int main()
{
    string f="3",s="2";
    int cnt=0;
    for(int i=0;i<1000;i++)
    {
        string t=s;
        s=add_s(f,s);
        f=add_s(t,s);
        if(f.length()>s.length())
            cnt++;
    }
    cout<<cnt;
}
