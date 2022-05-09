#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int ladderLength(string beginWord, string endWord, vector<string> &wordList)
    {
        set<string> st, words;
        for (auto i : wordList)
        {
            words.insert(i);
        }

        queue<string> q;
        q.push(beginWord);
        st.insert(beginWord);
        int res = 0;
        while (q.size())
        {
            int n = q.size();
            res++;
            for (int i = 0; i < n; i++)
            {

                string s = q.front();
                if (s == endWord)
                {
                    return res;
                }
                q.pop();
                string t;
                for (int k = 0; k < s.size(); k++)
                {
                    t = s;
                    for (auto j = 'a'; j <= 'z'; j++)
                    {
                        t[k] = j;
                        if (words.count(t) and !st.count(t))
                        {
                            q.push(t);
                            st.insert(t);
                        }
                    }
                }
            }
        }
        return 0;
    }
};