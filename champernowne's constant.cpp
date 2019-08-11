#include <bits/stdc++.h>
using namespace std;

string cat(string s,int n)
{
    s=s+std::to_string(n);
    return s;
}

int main()
{
    string s="";
    int i=1;
    while(s.length()<=1000000)
    {
        s=cat(s,i);
        i++;
    //    cout<<s.length()<<endl;
    }
    cout<<s[0]<<" "<<s[9]<<" "<<s[99]<<" "<<s[999]<<" "<<s[9999]<<" "<<s[99999];
}
