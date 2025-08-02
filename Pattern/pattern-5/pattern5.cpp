
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

int k=n-1;
int s = 1;
for(int i=1;i<=n*2-1;i++)
{
    for(int j=1;j<=k;j++)
    {
        cout<<" ";
    }
    for(int j=1;j<=s*2-1;j++)
    {
        cout<<"*";
    }

    if(i<n)
    {
         k--;
         s++;
    }
    else
    {
        k++;
        s--;
    }
    cout<<endl;


}


    return 0;
}

