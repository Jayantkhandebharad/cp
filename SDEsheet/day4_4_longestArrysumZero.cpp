#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxLen(vector<int> &A, int n)
    {
        unordered_map<int, int> aa;
        int sum = 0;
        int longest_sub = 0;
        if (A.size() < 1)
        {
            return 0;
        }
        aa[0] = -1;
        for (int i = 0; i < A.size(); i++)
        {
            sum += A[i];
            if (aa.count(sum))
            {
                int x = i - aa[sum];
                longest_sub = max(x, longest_sub);
            }
            else
            {
                aa[sum] = i;
            }
        }
        return longest_sub;
    }
};

class Solution
{
public:
    int maxLen(vector<int> &A, int n)
    {
        unordered_map<int, int> aa;
        int sum = 0;
        int longest_sub = 0;
        if (A.size() < 1)
        {
            return 0;
        }
        aa[0] = -1;
        for (int i = 0; i < A.size(); i++)
        {
            sum += A[i];
            if (aa.count(sum))
            {
                int x = i - aa[sum];
                longest_sub = max(x, longest_sub);
            }
            else
            {
                aa[sum] = i;
            }
        }
        return longest_sub;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, x;
        cin >> m;

        vector<int> s;
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            s.push_back(x);
        }
        Solution ob;
        cout << ob.maxLen(s, m) << endl;
    }
}