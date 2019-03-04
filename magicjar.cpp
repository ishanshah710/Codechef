#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int ma = x;
        for(int i=1;i<n;i++)
        {
            cin >> x;
            ma = max(x,ma);
        }
        cout << ma << '\n';
    }
    return 0;
}
