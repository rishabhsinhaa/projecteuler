#include <bits/stdc++.h>
using namespace std;

bool divisible(string s)
{
    int d1=(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0');
    int d2=d1%100;
    d2=d2*10+(s[4]-'0');
    int d3=d2%100;
    d3=d3*10+(s[5]-'0');
    int d4=d3%100;
    d4=d4*10+(s[6]-'0');
    int d5=d4%100;
    d5=d5*10+(s[7]-'0');
    int d6=d5%100;
    d6=d6*10+(s[8]-'0');
    int d7=d6%100;
    d7=d7*10+(s[9]-'0');
    //cout<<d1<<" "<<d2<<" "<<d3<<" "<<d4<<" "<<d5<<" "<<d6<<" "<<d7;
    if(d1%2==0&&d2%3==0&&d3%5==0&&d4%7==0&&d5%11==0&&d6%13==0&&d7%17==0)
        return true;
    return false;
}

long long strll(string s)
{
    long long sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum*=10;
        sum+=s[i]-'0';
    }
    return sum;
}

int main()
{
    string g="1023456789";
    long long sum=0;
    do
    {
        if(divisible(g))
         {
             sum+=strll(g);
            // cout<<g<<endl;
         }

    }while(next_permutation(g.begin(),g.end()));
    cout<<sum;
}
