#include <bits/stdc++.h>
using namespace std;

//2540160

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

int strdig(string s)
{
    int sum=0;
    for(int i=0;i<s.length();i++)
    {
        sum*=10;
        sum+=s[i]-'0';
    }
    return sum;
}

int main()
{
    string facto[10];
    facto[1]="1";
    facto[0]="1";
    for(int i=2;i<10;i++)
        facto[i]=fact(facto[i-1],i);
        long long int sum=0;
    for(int i=3;i<9999999;i++)
    {
        int s=0;
        int j=i;
        while(j!=0)
        {
            int r=j%10;
            j/=10;
            s+=strdig(facto[r]);
        }
        if(s==i)
        {
            cout<<i<<endl;
            sum+=i;
        }
    }
    for(int i=1;i<=9;i++)
    {
        cout<<strdig(facto[i])<<endl;
    }
    cout<<sum<<endl;
}
