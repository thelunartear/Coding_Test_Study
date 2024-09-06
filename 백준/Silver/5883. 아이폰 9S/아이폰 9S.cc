#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int ls(const vector<int>& arr, int r) {
    int prev = -1;
    int res = -1;
    int tmp = 0;
    int n = arr.size();
    
    for (int i = 0; i < n; ++i) 
    {
        if (arr[i] == r) 
        {
            continue;
        }

        if (prev == arr[i]) 
        {
            tmp += 1;
        } 
        else 
        {
            res = max(res, tmp);
            prev = arr[i];
            tmp = 1;
        }
    }
    res = max(res, tmp);
    return res;
}

int main() 
{
    int n;
    cin >> n;
    
    vector<int> b(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> b[i];
    }
    
    int ans = -1;
    set<int> uniqueElements(b.begin(), b.end());

    for (int r : uniqueElements) 
    {
        ans = max(ans, ls(b, r));
    }

    cout << ans;
    return 0;
}
