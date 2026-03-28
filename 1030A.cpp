#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n;

    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        }
      for(int i=0;i<n;i++)
      {

    if(v[i]==1)
      {
          cout<<"HARD"<<endl;
          return 0;
      }
      }



      cout<<"EASY"<<endl;
}
