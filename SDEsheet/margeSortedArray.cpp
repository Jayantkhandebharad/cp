//Efficiently merging two sorted arrays with O(1) extra space
//https://www.geeksforgeeks.org/efficiently-merging-two-sorted-arrays-with-o1-extra-space/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> aa, bb, cc;
    int t=0,aq;
    for (int i = 0; i < 10; i++)
    {
        cin >> aq;
        aa.push_back(aq);
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> aq;
        bb.push_back(aq);
    }
    int x = 0, y = 0;
    while (t < 2)
    {
        if (aa.size() > x and bb.size() > y and aa[x] < bb[y])
        {
            cc.push_back(aa[x]);
            x++;
        }
        else if (aa.size() > x and bb.size() > y and aa[x] > bb[y])
        {
            cc.push_back(bb[y]);
            y++;
        }
        else if (aa.size() <= x and bb.size() > y)
        {
            cc.push_back(bb[y]);
            y++;
        }
        else if (bb.size() <= y and aa.size() > x)
        {
            cc.push_back(aa[x]);
            x++;
        }
        else
        {
            t = 2;
        }
    }
    for (auto x : cc)
    {
        cout << x << " ";
    }
    return 0;
}
