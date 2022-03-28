#include <bits/stdc++.h>
using namespace std;

// This is the interface that allows for creating nested lists.
// You should not implement it, or speculate about its implementation
class NestedInteger
{
public:
    // Return true if this NestedInteger holds a single integer, rather than a nested list.
    bool isInteger() const;
    // Return the single integer that this NestedInteger holds, if it holds a single integer
    // The result is undefined if this NestedInteger holds a nested list
    int getInteger() const;
    // Return the nested list that this NestedInteger holds, if it holds a nested list
    // The result is undefined if this NestedInteger holds a single integer
    vector<NestedInteger> &getList() const;
};

class NestedIterator
{
public:
    vector<int> v;
    int counter;
    NestedIterator(vector<NestedInteger> &nestedList)
    {
        counter = 0;

        helper(nestedList);
    }

    int next()
    {
        return v[counter++];
    }

    bool hasNext()
    {
        return counter < v.size();
    }
    void helper(vector<NestedInteger> value)
    {
        for (auto i : value)
        {
            if (i.isInteger())
            {
                v.push_back(i.getInteger());
            }
            else
            {
                helper(i.getList());
            }
        }
        return;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */