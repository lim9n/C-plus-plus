#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);

      int n;
      int ans=0;
      cin>>n;

      vector<int>s;
      s.resize(n);


      for(int i=0;i<n;i++)
      cin>>s[i];

      sort(s.begin(),s.end());

      for (int i = 0; i < n; i++)
      {
            if(i==0)
            {
                  ans++;
                  continue;
            }
            if(s[i]!=s[i-1])
            ans++;
      }

      cout<<ans<<"\n";
      
      return 0;
}