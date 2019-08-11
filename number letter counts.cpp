#include <bits/stdc++.h>
using namespace std;

int ones[9]={3,3,5,4,4,3,5,5,4};
int tens[10]={3,6,6,8,8,7,7,9,8,8};
int tenth[8]={6,6,5,5,5,7,6,6};

int dig(int n)
{
    int cnt=0;
    while(n!=0)
    {
        n/=10;
        cnt++;
    }
    return cnt;
}

int letters(int n)
{
    int digits=dig(n);
    if(digits==1)
    {
        return ones[n-1];
    }
    if(digits==2)
    {
        if(n>=10&&n<20)
        {
            return tens[n-10];
        }
        else
        {
            int oned=n%10;
            int tend=(n/10)%10;
            if(oned!=0)
            {
                return ones[oned-1]+tenth[tend-2];
            }
            else
            {
                return tenth[tend-2];
            }
        }
    }
    if(digits==3)
    {
    if(n%100!=0)
{

     int hundd=n/100;
        return ones[hundd-1]+10+letters(n%100);
   }
   else
   {
       int hundd=n/100;
       return ones[hundd-1]+7;
   }
    }
}

int main()
{
    int sum[1000];
    sum[1]=letters(1);
    for(int i=2;i<1000;i++)
        sum[i]=sum[i-1]+letters(i);
    for(int i=10;i<20;i++)
        cout<<letters(i)<<endl;
    cout<<sum[9]<<endl<<sum[19]-sum[9]<<endl<<sum[99]-sum[19]<<endl<<sum[999]-sum[99]<<endl<<sum[199]-sum[99]<<endl<<sum[99]<<endl<<sum[100]-sum[99]<<endl<<sum[999]<<endl<<sum[999]+11;

}
