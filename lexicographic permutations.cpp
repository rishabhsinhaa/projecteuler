#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="0123456789";
    vector<string> v;
    do
    {
        v.push_back(s);
    }while(next_permutation(s.begin(),s.end())&&v.size()<=1000002);
    cout<<v[1000000]<<" "<<v[999999];

}
