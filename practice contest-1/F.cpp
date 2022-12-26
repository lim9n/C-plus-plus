// x

#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);

      string s;
      cin >> s;
      int ans = (int(s[0]) - 48) * (int(s[2]) - 48);
      cout << ans << endl;
      return 0;
}