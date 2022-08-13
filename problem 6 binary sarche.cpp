#include<bits/stdc++.h>
using namespace std;
int binary_sarche(int *a, int n, int k)
{
    int lower=0,upper=n-1;
    while(lower<=upper)
    {
        int mid=lower+upper/2;
        if(a[mid]==k)
        {
            return mid;
        }
       else if(a[mid]>k)
        {
            upper=mid-1;
        }
        else
        {
            lower=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int position=binary_sarche(ar,n,k);
    if(position!=-1)
    {
        cout<<position+1;
    }
    else
    {
        cout<<position;
    }
    return 0;
}
