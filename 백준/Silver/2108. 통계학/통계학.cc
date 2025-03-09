#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
using namespace std;

double calcMean(const vector<int>& v)
{
    double sum=0;
    for(int i:v)
        sum+=i;
    double ans=sum/v.size();
    double r=round(ans);
    if(r==0.0)  r=0.0;
    return r;
}

int calcMed(vector<int> v)
{
    sort(v.begin(), v.end());
    return v[v.size()/2];
}

int calcMode(const vector<int>& v)
{
    map<int, int> m;
    for(int i:v)    m[i]++;
    int maxFreq=0;
    for(const auto& j:m)
    {
        if(j.second>maxFreq)
            maxFreq=j.second;
    }
    vector<int> modes;
    for(const auto& j:m)
    {
        if(j.second==maxFreq)
            modes.push_back(j.first);
    }
    if(modes.size()>=2)
    {
        sort(modes.begin(), modes.end());
        return modes[1];
    }
    else
        return modes[0];
}

int calcRange(const vector<int>& v)
{
    int maxVal=v[0];
    int minVal=v[0];
    for(int i:v)
    {
        if(i>maxVal)
            maxVal=i;
        if(i<minVal)
            minVal=i;
    }
    return maxVal-minVal;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    cout<<calcMean(v)<<"\n"<<calcMed(v)<<"\n"<<calcMode(v)<<"\n"<<calcRange(v);
}