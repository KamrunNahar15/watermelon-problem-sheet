#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,p,width=0;
    cin>>n>>h;
    vector<int>v;

    for(int i=0; i<n; i++)
    {
        cin>>p;
        v.push_back(p);
    }
     for(auto p:v)
     {
        if(p>h)
        {
            width += 2;
        }
        else
        {
            width++;
        }
    }
    cout<<width<<endl;
}
