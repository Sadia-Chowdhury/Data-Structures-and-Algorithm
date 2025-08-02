
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

    int mid = (n/2)+1;
    int k = mid;
    for(int i=1; i<=n; i++)
    {
        if(i < mid)
        {
            for(int j=1; j<=i; j++)
            {
                cout<<"*";
            }
        }
        else
        {
            for(int j=1; j<=k; j++)
            {
                cout<<"*";

            }
            k--;
        }
        cout<<endl;

    }

    return 0;
}

