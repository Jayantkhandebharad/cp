/*

*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        //approach to tackle this ques->
        // 1-> stores the left smaller index and right smaller index
        // calculate the local area and check to the max area
        //if currvalue<st.top() then pop
        stack<int> st;
        int i = 0;
        int n = heights.size();
        int mArea = 0;
        while (i < n)
        {
            if (st.empty() || heights[i] >= heights[st.top()])
            {
                st.push(i);
                i++;
            }
            else
            {
                int x = st.top();
                st.pop();

                // cout<<x<<endl;
                int rightindex = i, leftindex;
                if (st.empty())
                    leftindex = 0;
                else
                {
                    leftindex = st.top();
                }
                int area;
                if (st.empty())
                    area = heights[x] * rightindex - leftindex;
                else
                    area = heights[x] * (rightindex - leftindex - 1);
                // cout<<area<<endl;
                mArea = max(mArea, area);
            }
        }
        while (!st.empty())
        {
            int x = st.top();
            st.pop();

            // cout<<x<<endl;
            int rightindex = i, leftindex;
            if (st.empty())
                leftindex = 0;
            else
            {
                leftindex = st.top();
            }
            int area;
            if (st.empty())
                area = heights[x] * rightindex - leftindex;
            else
                area = heights[x] * (rightindex - leftindex - 1);
            // cout<<area<<endl;
            mArea = max(mArea, area);
        }
        return mArea;
    }
};
