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
    string s1="1",s2="1";
    int k=2;
    while(s1.length()!=1000)
    {
        string temp=s2;
        s2=s1;
        s1=add(s1,temp);;
        k++;
    }
    cout<<k;
}
