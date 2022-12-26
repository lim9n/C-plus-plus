// x

#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int count=0;
      string s;
      cin>>s;

      if(s[0]== s[1]&& s[0]==s[2])
      cout<<"1"<<"\n";
      else if (s[0]!=s[1] && s[0]!=s[2] && s[1]!=s[2])
      cout<<"6"<<"\n";
      else
      cout<<"3"<<"\n";
      
      return 0;
}