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

string fact(string s,int n)
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

string powr(int n,int x)
{
    string s=std::to_string(n);
    for(int i=1;i<x;i++)
        s=fact(s,n);
    return (s);
}

int main()
{
    unordered_map<string ,int> hm;
    for(int i=2;i<=100;i++)
     {
         string s="";
         for(int j=2;j<=100;j++)
         {
             s=powr(i,j);
             hm[s]=1;

         }

    }
     cout<<hm.size();

}
