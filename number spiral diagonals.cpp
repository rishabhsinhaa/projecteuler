#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int sum=1;
    for(int i=3;i<=1001;i+=2)
        sum+=4*i*i-6*i+6;
    cout<<sum;
}
