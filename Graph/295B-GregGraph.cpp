#include<iostream>
using namespace std;
#define For(i,n)for(int i=1;i<=n;i++)
const int N=505;long long q[N],D[N][N],P[N][N],x[N],n;
int main(){
    cin>>n;For(i,n)For(j,n)cin>>P[i][j];For(i,n)cin>>x[i];
    For(i,n)For(j,n)D[i][j]=P[x[n-i+1]][x[n-j+1]];
    For(k,n){For(i,n)For(j,n)D[i][j]=min(D[i][j],D[i][k]+D[k][j]);
    For(x,k)For(y,k)q[n-k+1]+=D[x][y];}For(i,n)cout<<q[i]<<" ";
    
}