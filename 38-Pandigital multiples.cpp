#include <bits/stdc++.h>
using namespace std;

bool pan_check(string s)
{
    int a[9];
    for(int i=0;i<9;i++)
        a[i]=0;
    for(int i=0;i<9;i++)
    {

        a[s[i]-'0'-1]++;
    }
    for(int i=0;i<9;i++)
        if(a[i]!=1)
            return false;
    return true;

}

bool check_pan(int a,int i)
{
    while(a!=0)
    {
        if(i==a%10)
            return false;
        a/=10;
    }
    return true;
}

int dig(int a)
{
    int s=0;
    while(a!=0)
    {
        s++;
        a/=10;
    }
    return s;
}

string strr(string a)
{
    string s;
    for(int i=a.size()-1;i>=0;i--)
    {
        s+=a[i];
    }
    return s;
}

string ioa(int a)
{
    string s="";
    while(a!=0)
    {
        int p=a%10;
        char c=p+'0';
        s+=c;
        a/=10;
    }
    return strr(s);
}

bool pan_possible(int a)
{
    int s=dig(a);
    string ss=ioa(a);
    int i=2;
    for(;s<=9;i++)
    {
        s+=dig(a*i);
        ss+=ioa(a*i);
       // cout<<a*i;
    }
    if(s>10)
    {
        s-=dig(a*i);

    }

    if(s!=9)
        return false;
    return pan_check(ss);

}



int main()
{
    vector<int> nines;
    vector<int> nums;
    nines.push_back(9);
    while(true)
    {
        int s=nines[0];
        if(s>99999)
            break;
        nines.erase(nines.begin()+0);
        for(int i=1;i<10;i++)
        {
            if(check_pan(s,i))
                nines.push_back(s*10+i);
        }
        if(pan_possible(s))
            nums.push_back(s);


    }
    sort(nums.begin(),nums.end());
    cout<<nums[nums.size()-1];
}
