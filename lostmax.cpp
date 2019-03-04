#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         vector <int> v;
    int n;
    char c=' ';
    while(c!='\n')
    {
        scanf("%d%c",&n,&c);
        v.push_back(n);
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==(v.size()-1))
        {
            v[i]=0;
            break;
        }
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<endl;
    }
    return 0;
}
