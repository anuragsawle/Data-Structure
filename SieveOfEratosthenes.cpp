#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        a[i]=0;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(a[i]==0){
            for (int j = i*i; j<=n; j=i+j)
            {
                a[j]=1;
            }
        }
        
    }
    for (int i = 1 ; i <=n; i++)
    {
        if(a[i]==0)
        {
            cout<<i<<" ";
        }
    }
    
}