#include<iostream>
using namespace std;
#define ll long long
ll b[1<<22][2],n,m=1,a[100100],t,v;

void ad(ll x,ll y=1ll<<40,ll u=0){
if(y){
ll&p=b[u][(x&y)>0];
ad(x,y>>1,p?p:(p=m++));
}
}

ll qr(ll x,ll y=1ll<<40,ll u=0){
bool d=!(x&y);
return y?(b[u][d]?(y|qr(x,y>>1,b[u][d])):qr(x,y>>1,b[u][!d])):0;
}

int main(){
cin>>n;
for(int i=1;i<=n&&cin>>a[i];++i)ad(a[i]^=a[i-1]);
for(int i=0;i<=n;++i)if((v=qr(a[n]^a[i]))>t)t=v;
cout<<t<<endl;
}
