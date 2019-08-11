#include <bits/stdc++.h>
using namespace std;

unordered_map<long,int> hm;

long length(int n)
{
    if(hm.find(n)!=hm.end())
    {
        return hm[n];
    }
    else
    {
        if(n%2==0)
        {
            hm[n]=1+length(n/2);
            return hm[n];
        }
        else
        {
            hm[n]=1+length(3*n+1);
            return hm[n];
        }
    }
}


int main()
{
    int mx=0;
    hm[1]=1;
    for(int i=2;i<1000000;i++)
    {

       // cout<<i<<" "<<length(i)<<endl;
      if(mx<length(i)){
            mx=length(i);
            cout<<mx<<" "<<i<<endl;
      }

    }
    cout<<mx;

}
