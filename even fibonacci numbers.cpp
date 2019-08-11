#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int sum=2;
    int fib1,fib2;
    fib1=1,fib2=2;
    while(fib1<=4000000)
    {
            int temp=fib1;
            fib1=fib2;
            fib2=temp+fib2;
            if(fib2%2==0)
                sum+=fib2;
    }
    cout<<sum;
}
