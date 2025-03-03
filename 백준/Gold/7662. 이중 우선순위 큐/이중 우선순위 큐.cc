#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

priority_queue<int> maxHeap;
priority_queue<int, vector<int>, greater<int>> minHeap;
unordered_map<int, int> count;

void insert(int n)
{
    maxHeap.push(n);
    minHeap.push(n);
    count[n]++;
}

template<typename T>
void clean(T &heap)
{
    while(!heap.empty() && count[heap.top()]==0)
        heap.pop();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int k;
        cin>>k;

        maxHeap=priority_queue<int>();
        minHeap=priority_queue<int, vector<int>, greater<int>>();
        count.clear();

        for(int i=0;i<k;i++)
        {
            char c;
            int n;
            cin>>c>>n;

            if(c=='I')
            {
                insert(n);
            }
            else if(c=='D')
            {
                if(n==1)
                {
                    clean(maxHeap);
                    if(!maxHeap.empty())
                    {
                        count[maxHeap.top()]--;
                        maxHeap.pop();
                    }
                }
                else if(n==-1)
                {
                    clean(minHeap);
                    if(!minHeap.empty())
                    {
                        count[minHeap.top()]--;
                        minHeap.pop();
                    }
                }
            }
        }
        clean(maxHeap);
        clean(minHeap);

        if(maxHeap.empty()||minHeap.empty())
            cout<<"EMPTY\n";
        else
            cout<<maxHeap.top()<<' '<<minHeap.top()<<"\n";
    }
}