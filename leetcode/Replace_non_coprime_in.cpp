#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> replaceNonCoprimes(vector<int> &a)
    {
        int n = a.size();
        stack<int> st;
        st.push(a[0]);

        for (int i = 1; i < n; i++)
        {
            if (st.empty())
            {
                st.push(a[i]);
                continue;
            }

            int cr = a[i];
            int gcd, LCM, tp;
            while (!st.empty())
            {

                int gcd = __gcd(cr, st.top());
                // non-coprime
                if (gcd > 1)
                {
                    tp = st.top();
                    st.pop();
                    LCM = (cr / gcd) * tp;
                    cr = LCM;
                }
                else
                    break;
            }

            st.push(cr);
        }

        vector<int> ans;

        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
