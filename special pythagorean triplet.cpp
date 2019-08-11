#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int i=1;i<=998;i++)
    {
        for(int j=i;j<=998;j++)
        {
            float u=(float)i*i+(float)j*j;
            float w=sqrt(u);
            if(w*w==u)
            {
                  //  cout<<i<<" "<<j<<" "<<w<<" \t\t"<<i+j+w<<endl;
                if(i+j+w==1000)
                {
                    long long k=i*j*w;
                    cout<<k;
                    return 0;
                }
            }
        }
    }
}
