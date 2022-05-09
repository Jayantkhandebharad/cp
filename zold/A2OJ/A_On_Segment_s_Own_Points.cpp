#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> st(n);
    for (int i = 0; i < n; i++)
    {
        cin >> st[i].first >> st[i].second;
    }

    int x = st[0].first;
    int y = st[0].second;
    if (n == 1)
    {
        cout << y - x << endl;
        return 0;
    }
    st.erase(st.begin(), st.begin() + 1);
    sort(st.begin(), st.end());
    int k = 0;
    int i = x;
    int j = 0;
    while (i < y and j < st.size())
    {
        if (i < st[j].first)
        {
            if (st[j].first < y)
            {
                k += st[j].first - i;
                i = st[j].second;
            }
            else
            {
                k++;
                i++;
            }

            j++;
            if (j > st.size() - 1 and i < y)
            {
                k += y - i;
            }
        }
        else if (i >= st[j].first)
        {

            if (i < st[j].second)
            {

                i = st[j].second;
            }
            j++;
            if (j > st.size() - 1 and i < y)
            {
                k += y - i;
            }
        }
    }
    cout << k << endl;
}