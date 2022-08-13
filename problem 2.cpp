#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
       bool found=true;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                found=false;
                break;
            }
        }
        if(found==true)count++;
    }
    cout<<count;
    return 0;
}
