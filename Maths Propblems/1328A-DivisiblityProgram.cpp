// https://codeforces.com/problemset/problem/1328/A

#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int k = a/b;
        if(a%b==0){
            cout<<0<<endl;
            continue;
        }
        cout<<b*(k+1)-a<<endl;
    }
}
