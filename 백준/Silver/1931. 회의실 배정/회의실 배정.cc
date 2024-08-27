#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	vector<pair<int, int>> schedule;
	
	for (int i = 0; i < n; i++)
	{
		int start, end;
		cin >> start >> end;
		schedule.push_back({ end,start });
	}

	sort(schedule.begin(), schedule.end());

	int time = 0;
	int cnt = 0;

	for (int i = 0; i <n; i++)
	{
		if (schedule[i].second >= time)
		{
			time = schedule[i].first;
			cnt++;
		}
	}

	cout << cnt;
}