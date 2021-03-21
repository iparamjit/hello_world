#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,j;
    cin>>T;
    while(T--)
    {
        int n,k,i,sum=0;
        cin>>n>>k;
        int a[n];
        for(i=1;i<=n; i++)
        {
            if(k==0||k==n)
                break;
            if(sum+i<=i+1 && k>0)
            {
                a[i-1]=i;
                sum+=i;
                k--;
                continue;
            }
            if(sum>i)
            {
                a[i-1]=-i;
                sum-=i;
                if(sum>0)
                    k--;
                continue;
            }
            if(sum>1 && k==1)
            {
                a   [i-1]=-i;
                if(sum-i>0)
                    break;
                else
                {
                    sum-=i;
                    continue;
                }
            }
            if(sum >1 && k>1)
            {
                a[i-1]=i;
                if(sum>0)
                    k--;
                sum+=i;
            }
        }
        if(k==n)
            for(i=1;i<=n;i++)
                a[i-1]=i;
        else if(i<=n)
            for(;i<=n;i++)
                a[i-1]=-i;
        for(i=1;i<=n;i++)
            cout<<a[i-1]<<" ";
        cout<<endl;
    }
    return 0;
}