/*Given a string s, return true if the s can be palindrome after deleting at most one character from it.*/

//problem link: https://leetcode.com/problems/valid-palindrome-ii/

#include <bits/stdc++.h>
using namespace std;



class Solution
{
public:
    bool validPalindrome(string s)
    {
        int left = 0;
        int right = s.size() - 1;

        while (left <= right)
        {

            if (s[left] != s[right])
            {

                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }

            left++;
            right--;
        }

        return true;
    }

    bool isPalindrome(string s, int start, int end)
    {

        while (start <= end)
        {

            if (s[start] != s[end])
            {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};