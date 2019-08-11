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

int digsum(string s)
{
    int sum=0;
    for(int i=0;i<s.length();i++)
        sum+=s[i]-'0';
    return sum;
}

int main()
{
    string facto[101];
    facto[1]="1";
    for(int i=2;i<=100;i++)
    {
        facto[i]=fact(facto[i-1],i);
    }
    for(int i=5;i<=15;i++)
        cout<<facto[i]<<endl;
    cout<<facto[100]<<endl<<digsum(facto[100]);
}
