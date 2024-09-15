#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[7];
vector<int> odd;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int ans=0;
    int n=0;
    int m_odd=0;
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<7;i++)
    {
        if(arr[i]%2==1)
        {
            n++;
            ans+=arr[i];
            odd.push_back(arr[i]);
        }
    }
    if(odd.empty())
    {
        cout<<-1;
    }
    else
    {
        sort(odd.begin(),odd.end());
        cout<<ans<<"\n"<<odd[0];
    }
}