#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    int row_size=arr.size();
    int cell_size=arr[0].size();
   
    if(row_size>cell_size)
    {
        for(int i=0;i<row_size;i++)
        {
            arr[i].resize(row_size);
        }
    }
    else if(row_size<cell_size)
    {
        for (int i = 0; i < cell_size - row_size; ++i)
        {
            arr.push_back(vector<int>(cell_size, 0));
        }
    }
    else
        return arr;
    
    return arr;
}