#include<bits/stdc++.h>
using namespace std;int n,k; string s,z;map<string,int> m;void l(string &s) {for(char &c: s) c=tolower(c);}int main() { cin >> n; while (n > 0) { cin >> s >> z >> z; l(s); l(z); m[s] = m[z] + 1; k = max(k, m[s]); --n; } cout << k + 1; return 0; }