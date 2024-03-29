#include <cstdio>
#define R(v,M) for(int v=0;v<M;v++)
#define REP R(i,M)R(j,M)
#define LL long long
typedef LL T[52][52];
LL N;
int r,M,K,m=1000000007;
T A,B;
void mul(T A,T B){
	T C={};
	REP R(k,M)C[i][j]=(C[i][j]+A[i][k]*B[k][j])%m;
	REP A[i][j]=C[i][j];
}
int main(){
	scanf("%I64d%d%d",&N,&M,&K);
	REP A[i][j]=i==j,B[i][j]=1;
	char x,y;
	R(i,K){
		scanf(" %c%c",&x,&y);
		B[x-(x>96?97:39)][y-(y>96?97:39)]=0;
	}
	for(N--;N;N>>=1){
		if(N&1)mul(A,B);
		mul(B,B);
	}
	REP r=(r+A[i][j])%m;
	printf("%d\n",r);
}
						 		   		  				   		     	