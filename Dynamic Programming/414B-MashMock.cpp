#include<iostream>
int t,n,ans,dp[2016][2016],M=1e9+7,i,j,k;
int main(){
std::cin>>n>>t;dp[0][1]=1;
for(i=1;i<=t;i++)for(j=1;j<=n;j++)for(k=j;k<=n;k+=j)(dp[i][k]+=dp[i-1][j])%=M;
for(i=1;i<=n;i++)(ans+=dp[t][i])%=M;std::cout<<ans;
}
