#include <bits/stdc++.h>
using namespace std;

#define lim 10000001

int sieve[lim];

void pr_sv()
{
    sieve[0]=0;
    sieve[1]=0;
    sieve[2]=1;
    for(int i=3;i<lim;i++)
    {
        sieve[i]=1;
    }
    for(int i=3;i<lim;i++)
    {
        if(sieve[i])
        {
            for(int j=i+i;j<lim;j+=i)
                sieve[j]=0;
        }
    }

}

bool accep_pr(int n)
{
    int a[10];
    pr_sv();
    if(!sieve[n])
        return false;
    for(int i=0;i<10;i++)
    {
        a[i]=0;
    }
    while(n!=0)
    {
        int r=n%10;
        if(a[r]==1)
            return true;
        a[r]++;
        n/=10;
        cout<"*";
    }
    return false;
}

string iota(int n)
{
    string s="";
    while(n!=0)
    {
        int r=n%10;
        char a=r+'0';
        s=a+s;
        n/=10;
    }
    return s;
}

int ato(string s)
{
    int su=0;
    for(int i=0;i<s.length();i++)
    {
        su*=10;
        su+=s[i]-'0';
    }
    return su;
}

bool check_pr(int n)
{
    if(!accep_pr(n))
        return false;
    vector<vector<int> > a;
    a.resize(10);
    int b=n;
    int cnt=0;
    string bw=iota(n);
    for(int i=0;i<bw.size();i++)
    {
        a[bw[i]-'0'].push_back(i);
    }
    /*
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<10;i++)
    {
        if(a[i].size()>1)
        {
           // cout<<i<<endl;
            for(int j=0;j<a[i].size();j++)
            {
                for(int k=j+1;k<a[i].size();k++)
                {
                    cnt=0;
                    bw=iota(n);
                    for(int o=0;o<10;o++)
                    {
                        bw[a[i][j]]=o+'0';
                        bw[a[i][k]]=o+'0';
                        int u=ato(bw);
                        if(sieve[u])
                         {
                             cout<<u<<" "<<a[i][j]<<" "<<a[i][k]<<endl;
                             cnt++;
                         }
                        if(cnt==8)
                            return true;
                      //  cout<<bw<<endl;
                    }
                    cout<<cnt<<endl;

                }
                //cout<<cnt<<endl;
            }
        }
    }
    */
    for(int i=0;i<10;i++)
    {
        bw=iota(n);
        if(a[i].size()>1)
        {
            bw=iota(n);
            cnt=0;
            for(int j=0;j<10;j++)
            {
                for(int k=0;k<a[i].size();k++)
                {
                    bw[a[i][k]]=j+'0';
                }
                if(sieve[ato(bw)])
                    cnt++;
                if(cnt==8)
                    return true;
            }
        }
    }
    cout<<n<<endl;
    return false;
}

int main()
{


    for(int i=100000;i<lim;i++)
    {
        if(check_pr(i))
        {
            cout<<i<<endl;
            return 0;
        }
    }
}
