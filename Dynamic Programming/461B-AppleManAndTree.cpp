#include<bits/stdc++.h>
using namespace std;long long n,i,a[100005],b,d[100005][2],m=1e9+7;int main(){cin>>n;for(i=1;i<n;i++)cin>>a[i];for(i=0;i<n;i++)cin>>b,d[i][b]=1;for(i=n-1;i;i--)d[a[i]][1]=(d[a[i]][1]*(d[i][0]+d[i][1])+d[a[i]][0]*d[i][1])%m,d[a[i]][0]=(d[a[i]][0]*(d[i][0]+d[i][1]))%m;cout<<d[0][1];}