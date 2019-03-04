#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        vector < pair<int,int> > v;
        for(int i=0;i<n;i++)
        {
            pair<int,int> p;
            p = make_pair(arr[arr[i]-1],arr[i]);
            v.push_back(p);
        }
        sort(v.begin(),v.end());
       /* for(int i=0;i<n;i++)
            cout << v[i].first << ' ' << v[i].second <<endl; */
        bool flag = 0;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i].first == v[i+1].first)
            {
                if(v[i].second != v[i+1].second)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag)
            cout << "Truly Happy\n";
        else
            cout << "Poor Chef\n";
    }
    return 0;
}
