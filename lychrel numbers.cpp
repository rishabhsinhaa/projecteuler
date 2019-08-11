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

bool ispalin(string s)
{
    for(int i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-1-i])
            return false;
    }
    return true;
}

int main()
{
    int count=0;
    for(int i=1;i<10000;i++)
    {
        int flag=0;

            string s=to_string(i);
        for(int j=0;j<50;j++)
        {
            s=add_s(s,rev(s));
            if(ispalin(s))
            {
                cout<<s<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            count++;

    }
    cout<<count;
}
