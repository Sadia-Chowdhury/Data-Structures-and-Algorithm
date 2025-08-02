#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//cout<<fixed<<setprecision(2);

    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

