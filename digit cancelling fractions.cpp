#include <bits/stdc++.h>
using namespace std;

bool curious_frac(int a,int b)
{
    double div=(double)a/b;
    if(a%10==0&&b%10==0)
        return false;
    double d1,d2,d3,d4;
    d1=d2=d3=d4=1;
    double c1,c2,c3,c4;
    c1=a%10;
    c2=a/10;
    c3=b%10;
    c4=b/10;
    d1=c1/c3;
    d2=c1/c4;
    d3=c2/c3;
    d4=c2/c4;
    if(c2==c4&&d1==div)
        return true;
    if(c2==c3&&d2==div)
        return true;
    if(c1==c4&&d3==div)
        return true;
    if(c1==c3&&d4==div)
        return true;
    return false;
}


int main()
{
    for(int i=98;i>=10;i--)
    {
        for(int j=i+1;j<=99;j++)
        {
            if(curious_frac(i,j))
                cout<<i<<" "<<j<<endl;
        }
    }

}
