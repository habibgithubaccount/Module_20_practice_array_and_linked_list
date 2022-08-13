#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    for(int i=1; i<n; i++)
    {

        ar[i]+=ar[i-1];
    }
    cin>>q;
    while(q--)
    {
        int l,r,ans;
        cin>>l>>r;
        if(l==1)
        {
            ans=ar[r-1];
        }
        else ans=ar[r-1]-ar[l-2];
        cout<<ans<<endl;
    }
    return 0;
}
