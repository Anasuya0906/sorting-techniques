#include<bits/stdc++.h>
using namespace std;
void ss(int n,int a[])
{
    int min;
    for(int i=0;i<n-1;i++)
    {
         min=i;
         for(int j=i+1;j<n;j++)
         {
             if(a[j]<a[min])
             {
                 min=j;
             }
         }
         swap(a[i],a[min]);
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
    ss(n,a);
}