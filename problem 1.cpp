#include<bits/stdc++.h>
using namespace std;
void minimum(int *ar, int n,int *final)
{
    int m=ar[0];
    for(int i=1; i<n; i++)
    {
        if(ar[i]>m)m=ar[i];
    }
    int freq[m+1]= {0};
    for(int i=0; i<n; i++)
    {
        freq[ar[i]]++;
    }
    for(int i=1; i<m+1; i++)
    {
        freq[i]+=freq[i-1];
    }

    for(int i=n-1; i>=0; i--)
    {
        freq[ar[i]]--;
        int k=freq[ar[i]];
        final[k]=ar[i];

    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    int final[n];

    minimum(ar,n,final);

    int mi=0,ma=0;
    for(int i=0; i<n; i++)
    {
        if(final[i]!=final[i+1])
        {
            mi++;
            if(mi==k)
            {
                cout<<final[i]<<" ";
                break;
            }

        }
        if(mi==k)break;
    }

    for(int i=n-1; i>=0; i--)
    {
        if(final[i]!=final[i-1])
        {
            ma++;
            if(ma==k)
            {
                cout<<final[i];
            }
        }
        if(ma==k)break;
    }
    return 0;
}
