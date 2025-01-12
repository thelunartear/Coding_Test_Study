#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double n;
    cin>>n;

    cout<< fixed << setprecision(0) << n*(1-0.22)<<' '<<n-n*(1-0.8)*0.22;
}