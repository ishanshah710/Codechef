#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c[26],sum=0;
        bool a[26]={0};
        for(int i=0;i<26;i++)
            cin>>c[i];
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            a[s[i]-'a']=1;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i])
            {}
            else
                sum+=c[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
