#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long n;
vector<long long> v;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n;
  for(long long i=0;i<n;i++)
    {
      int a;
      cin>>a;
      v.push_back(a);
    }
  sort(v.begin(), v.end());
  for(long long i=0;i<n;i++)
    {
      cout<<v[i]<<"\n";
    }
}