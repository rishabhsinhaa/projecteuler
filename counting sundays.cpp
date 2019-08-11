#include <bits/stdc++.h>
using namespace std;

int main()
{
    int daysm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    long tdays=0;
    for(int i=1901;i<=2000;i++)
    {
        if(i%4==0&&i%400!=0)
            tdays+=366;
        else
            tdays+=365;
    }
    cout<<tdays<<endl;
    int lpy=1901;
    int mnth=0;
    int day=1;
    int cnt=0;
    while(day<tdays)
    {
        if(day%7==0)
            cnt++;
        if(mnth==1&&lpy%4==0&&lpy%400==0)
            day+=29;
        else
            day+=daysm[mnth];
        mnth++;
        if(mnth==12)
            lpy++;
        mnth=mnth%12;
        cout<<day<<" "<<lpy<<" "<<mnth+1<<" "<<cnt<<endl;
    }
    cout<<cnt;
}
