#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    int cnt=0;
    int mx=0;
    for(int i=3;i<=1000;i++)
    {
        cnt=0;
        int a[3];
        for(int j=1;j<=i/2;j++)
        {
            for(int o=1;o<=i/2;o++)
            {
                int u=i-o-j;
                if(u==0)
                    break;
                if(u*u==j*j+o*o||j*j==u*u+o*o||o*o==j*j+u*u)
                 {

                         cnt++;
                         cout<<j<<" "<<u<<" "<<o<<endl;

                 }
            }
        }
        if(mx<cnt)
        {
            mx=cnt;
            p=i;
        }
    }
    cout<<mx<<endl<<p;
}
