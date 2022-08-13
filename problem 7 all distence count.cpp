#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     int maximum=a[0],minimum=a[0];
    for(int i=1;i<n;i++)
    {
         if(a[i]>maximum)maximum=a[i];
        if(a[i]<minimum)minimum=a[i];
    }
    int distance=(maximum-minimum)+1;
    cout<<distance;
    return 0;
}
