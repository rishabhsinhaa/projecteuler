#include <bits/stdc++.h>
using namespace std;

string rev(string s)
{
    string temp="";
    for(int i=0;i<s.length();i++)
    {
        temp=s[i]+temp;
    }
    return temp;
}

string prod(string s,int n)
{
    int c=0;
    s=rev(s);
    for(int i=0;i<s.length();i++)
    {
        int a=s[i]-'0';
        int prod=a*n+c;
        c=0;
        if(prod>9)
        {
            s[i]=prod%10+'0';
            c=prod/10;
        }
        else
            s[i]=prod+'0';
        //cout<<c<<" "<<s[i]<<endl;
    }
    if(c!=0)
    s=s+rev(std::to_string(c));
    return rev(s);
}

string powe(int n)
{
    string s=std::to_string(n)+"";
    for(int i=1;i<n;i++)
    {
        s=prod(s,n);
    }
    return s;
}

string add(string a,string b)
{
    int l1=a.length();
    int l2=b.length();
    if(l2>l1)
    {
        string temp=a;
        a=b;
        b=temp;
        l1+=l2;
        l2=l1-l2;
        l1=l1-l2;
    }
    int c=0;
    a=rev(a);
    b=rev(b);
    for(int i=0;i<l2;i++)
    {
        a[i]+=b[i]-'0'+c;
        c=0;
        if(a[i]>'9')
        {
            a[i]=a[i]-10;
            c=1;
        }
    }
    int i=l2;
    while(c!=0&&i<l1)
    {
        a[i]+=c;
        c=0;
        if(a[i]>'9')
        {
            a[i]-=10;
            c=1;
        }
        i++;
    }
    if(c==1)
        a=a+rev(std::to_string(c));
    return rev(a);
}


int main()
{
    string s="0";
    for(int i=1;i<=1000;i++)
    {
        s=add(s,powe(i));
        if(i%10==0)
        cout<<i<<endl;
    }
    cout<<s;
}
