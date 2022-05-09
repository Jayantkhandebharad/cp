#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeKdigits(string num, int k)
    {

        int n = num.length();
        if (n == k)
        {
            return "0"; // if we have to remove every element from the num, we are left with zero
        }
        // we know that digit makes more difference (increases value) when it is placed on the left side of a number (MSB) ,
        //so our tasks is to find the largest number on the left side while we are left with k and remove it, which will make the number smallest as possible.
        stack<char> st;
        st.push(num[0]);
        for (int i = 1; i < n; i++)
        {
            while (!st.empty() && k > 0 && st.top() > num[i]) // finding the greater number on the left side
            {
                st.pop();
                k--;
            }
            if (st.empty() == true && num[i] == '0')
            {
                continue;
            }
            st.push(num[i]);
        }

        while (!st.empty() && k > 0) // if we have a case like e.g "1234" & k = 2 , so every element is added to the stack and k is not decreased. since the number is in ascending order removing element from left side wont result in smaller number , so we remove it from the back.
        {
            st.pop();
            k--;
        }

        if (st.empty() == true) // if no digit left then we return zero
        {
            return "0";
        }

        string res = "";
        while (!st.empty())
        {
            res = res + st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());

        return res;
    }
};