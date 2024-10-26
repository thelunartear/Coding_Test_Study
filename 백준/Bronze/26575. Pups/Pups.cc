#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        double d,f,p;
        cin>>d>>f>>p;

        double cost=d*f*p;
        printf("$%.2f\n", cost);
    }
}