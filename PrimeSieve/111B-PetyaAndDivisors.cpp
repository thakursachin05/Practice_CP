#include<cstdio>
int p[100010],i,j,x,y,n,a;
#define D(T) if(p[T]<i-y)++a;p[T]=i;
int main(){
	scanf("%d",&n);
	for(i=1;a=0,i<=n;++i){
		scanf("%d%d",&x,&y);
		for(j=1;j*j<x;++j)if(x%j==0){D(j)D(x/j)}
		if(x%j==0){D(j);}
		printf("%d\n",a);
	}
	return 0;
}