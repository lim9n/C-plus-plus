#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);

      long long int n,sum=0;
      cin>>n;

      vector<int>str;
      str.resize(n);
      for(int i=0;i<n-1;i++)
            cin>>str[i];


      for (int i = 0; i < n-1; i++)
            sum=sum+str[i];


      long long int ans=(n*(n+1))/2;

      cout<<ans-sum<<"\n";
      
      return 0;
}