#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ar[i][j];
        }
    }
    int sum=0;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        if(i%2!=0 && j%2==0)sum+=ar[i][j];
        }
    }
    cout<<sum;
    return 0;
}
