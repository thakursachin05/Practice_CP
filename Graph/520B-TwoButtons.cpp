#include <iostream>
int n,m,a;main(){std::cin>>n>>m;while(n<m)m%2?m++:m/=2,a++;std::cout<<a+n-m;}