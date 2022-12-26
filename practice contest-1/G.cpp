// x

#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);

      int n,m;
      string s;

      cin>>n>>m;
      cin>>s;
      reverse(s.begin()+n-1, s.begin()+m);

      cout<<s<<"\n";
      return 0;
}