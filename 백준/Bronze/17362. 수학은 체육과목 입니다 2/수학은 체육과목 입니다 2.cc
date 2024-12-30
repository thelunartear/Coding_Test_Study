#include <iostream>
using namespace std;

int main() {
    long long l;
    cin>>l;
    l%=8;

    int arr[8]={2,1,2,3,4,5,4,3};

    cout<<arr[l];
}
