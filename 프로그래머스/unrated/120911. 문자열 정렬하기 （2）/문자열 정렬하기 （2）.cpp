#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    int len=my_string.size();
    for(int i=0;i<len;i++)
    {
        my_string[i]=tolower(my_string[i]);
    }
    sort(my_string.begin(), my_string.end());
    
    return my_string;
}