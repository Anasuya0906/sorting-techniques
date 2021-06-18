#include<bits/stdc++.h>
using namespace std;
void bs(int n,int a[])
{
    int sp;
    for(int i=0;i<n-1;i++)
    {
         sp=0;
         for(int j=0;j<n-1-i;j++)
         {
             if(a[j+1]<a[j])
             {
                 swap(a[j],a[j+1]);
                 sp=1;
             }
         }
         if(sp==0)
         {
             break;
         }
    }    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    bs(n,a);
}