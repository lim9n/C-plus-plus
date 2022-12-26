#include <bits/stdc++.h>
using namespace std;

int main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      long long int n;
      cin >> n;
      long long int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];
      long long int ans = 0, m = arr[0];
      for (int i = 1; i < n; i++)
      {
            ans += max(0LL, m - arr[i]);
            m = max(m, arr[i]);
      }
      cout << ans;
      return 0;
}