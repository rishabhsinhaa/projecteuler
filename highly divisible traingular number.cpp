#include <bits/stdc++.h>
using namespace std;

const int o=10000000;

bool prime[o];


int no_div(long long int x)
{

    int div=1;
    for(int i=2;i<=x;i++)
    {
        if(prime[i])
        {
                int cnt=0;
            if(x%i==0)
            {
                while(x%i==0)
                {
                    x/=i;
                    cnt++;
                }
                div*=(cnt+1);
            }
        }
    }
    return div;

}


int main()
{
    for(int i=2;i<o;i++)
        prime[i]=true;
    for(int i=2;i*i<=o;i++)
    {
        if(prime[i])
        {
            for(int j=i+i;j<o;j+=i)
                prime[j]=false;
        }
    }
    int div=0;
    long long int n=3,s;
    while(div<=500)
    {
         s=n*(n+1)/2;
        div=no_div(s);
        cout<<div<<" "<<s<<endl;
        n++;
    }
    cout<<s;
}
