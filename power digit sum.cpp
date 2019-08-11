#include <bits/stdc++.h>
using namespace std;

string rev(string s)
{
    string temp="";
    for(int i=0;i<s.length();i++)
    {
        temp=s[i]+temp;;
    }
    return temp;
}

string mult_2(string s)
{
    int l=s.length();
    s=rev(s);
    int c=0;
    for(int i=0;i<l;i++)
    {
        int a=s[i]-'0';
        //cout<<a<<endl;
        a=a*2+c;
        c=0;
        if(a>9)
        {
            a=a-10;
            c=1;
        }
        s[i]=a+'0';
    }
    if(c==1)
        s=s+std::to_string(c);
    return rev(s);
}

int div_sum(string s)
{
    int su=0;
    for(int i=0;i<s.length();i++)
    {
        su=su+s[i]-'0';
    }
    return su;
}

int num_dig(string s)
{
    return s.length();
}

int main()
{
    string s="1";
    for(int i=0;i<1000;i++)
        s=mult_2(s);
    cout<<s<<endl<<num_dig(s)<<endl<<div_sum(s);

}
