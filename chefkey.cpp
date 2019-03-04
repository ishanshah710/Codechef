#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,c,k=0;
        cin>>n>>m>>c;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(i*j == c)
                    k++;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
