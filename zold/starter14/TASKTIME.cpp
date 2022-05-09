#include <bits/stdc++.h>
using namespace std;
class temp {
public:
	long long int a, b, c;

};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--)
	{
		long long int n, m, k;
		cin >> n >> m >> k;
		long long int a[n];
		long long int b[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];

		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		unordered_map<long long int, vector<long long int>>mp;
		for (int i = 0; i < n; i++)
		{
			mp[a[i]].push_back(b[i]);
		}
		vector<pair<long long int, long long int>>ans;
		for (auto it : mp)
		{
			vector<long long int>x = it.second;
			sort(x.begin(), x.end());
			ans.push_back({x[0], -(it.first)});
			for (int j = 1; j < x.size() - 1; j += 2)
			{
				ans.push_back({x[j] + x[j + 1], it.first});
			}

		}
		sort(ans.begin(), ans.end());
		unordered_map<long long int, long long int>mpp;
		for (int i = 0; i < ans.size(); i++)
		{
			if (k - ans[i].first >= 0)
			{
				if (ans[i].second < 0)
				{
					mpp[-(ans[i].second)]++;
				}
				else {
					mpp[ans[i].second] += 2;
				}
				k -= ans[i].first;
			}
			else {
				break;
			}
		}
		long long int anss = 0;
		for (auto it : mpp)
		{
			if (it.second % 2 == 0)
				anss += it.second / 2;
			else anss += it.second / 2 + 1;

		}
		cout << anss << endl;


	}

}